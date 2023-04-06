#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>
#include <typeinfo>
#include <array>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32_multi_array.hpp"
#include "std_msgs/msg/string.hpp"

// #include "compose_nodes/node1.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class MergeArrays : public rclcpp::Node
{
    bool startMerge = false;
    std_msgs::msg::Int32MultiArray result;
    std_msgs::msg::Int32MultiArray result2;
    std_msgs::msg::Int32MultiArray result_array;

public:
    MergeArrays() : Node("merge_arrays_publisher"), count_(0)
    {
        publisher_ = this->create_publisher<std_msgs::msg::Int32MultiArray>("/output/array", 10);
        subscription_ = this->create_subscription<std_msgs::msg::Int32MultiArray>("input/array1", 10, std::bind(&MergeArrays::topic_callback, this, _1));
        subscription2_ = this->create_subscription<std_msgs::msg::Int32MultiArray>("input/array2", 10, std::bind(&MergeArrays::topic_callback2, this, _1));
        timer_ = this->create_wall_timer(500ms, std::bind(&MergeArrays::timer_callback, this));
    }

private:
    void topic_callback(const std_msgs::msg::Int32MultiArray &msg)
    {
        result = msg;
    }
    void topic_callback2(const std_msgs::msg::Int32MultiArray &msg)
    {
        result2 = msg;
        startMerge = true;
    }
    rclcpp::Subscription<std_msgs::msg::Int32MultiArray>::SharedPtr subscription_;
    rclcpp::Subscription<std_msgs::msg::Int32MultiArray>::SharedPtr subscription2_;

    void timer_callback()
    {
        if (startMerge)
        {
            merge_arrays(result, result2);
            publisher_->publish(result_array);
            for(int i: result_array.data){
                RCLCPP_INFO(this->get_logger(), "%d", i);
            }
        }
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::Int32MultiArray>::SharedPtr publisher_;
    size_t count_;

    void merge_arrays(std_msgs::msg::Int32MultiArray array1, std_msgs::msg::Int32MultiArray array2)
    {

        int i = 0;
        int j = 0;
        int result_array_index = 0;
        int arr_len1 = sizeof(array1.data) / sizeof(array1.data[0]);
        int arr_len2 = sizeof(array2.data) / sizeof(array2.data[0]);
        while (i < arr_len1-1 && j < arr_len2-1)
        {
            if (array1.data[i] < array2.data[j])
            {
                result_array.data.push_back(array1.data[i]);
                i++;
                result_array_index++;
            }
            else
            {
                result_array.data.push_back(array2.data[j]);
                j++;
                result_array_index++;
            }
        }
            while (i < arr_len1-1)
            {
                result_array.data.push_back(array1.data[i]);
                i++;
                result_array_index++;
            }

            while (j < arr_len1-1)
            {
                result_array.data.push_back(array2.data[j]);
                j++;
                result_array_index++;
            }
        
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MergeArrays>());
    rclcpp::shutdown();
    return 0;
}
