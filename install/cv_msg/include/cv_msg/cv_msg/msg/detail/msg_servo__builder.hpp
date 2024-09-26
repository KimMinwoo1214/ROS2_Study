// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cv_msg:msg/MsgServo.idl
// generated code does not contain a copyright notice

#ifndef CV_MSG__MSG__DETAIL__MSG_SERVO__BUILDER_HPP_
#define CV_MSG__MSG__DETAIL__MSG_SERVO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cv_msg/msg/detail/msg_servo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cv_msg
{

namespace msg
{

namespace builder
{

class Init_MsgServo_degree
{
public:
  Init_MsgServo_degree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cv_msg::msg::MsgServo degree(::cv_msg::msg::MsgServo::_degree_type arg)
  {
    msg_.degree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cv_msg::msg::MsgServo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cv_msg::msg::MsgServo>()
{
  return cv_msg::msg::builder::Init_MsgServo_degree();
}

}  // namespace cv_msg

#endif  // CV_MSG__MSG__DETAIL__MSG_SERVO__BUILDER_HPP_
