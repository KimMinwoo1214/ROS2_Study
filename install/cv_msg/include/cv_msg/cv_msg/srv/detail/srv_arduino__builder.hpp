// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cv_msg:srv/SrvArduino.idl
// generated code does not contain a copyright notice

#ifndef CV_MSG__SRV__DETAIL__SRV_ARDUINO__BUILDER_HPP_
#define CV_MSG__SRV__DETAIL__SRV_ARDUINO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cv_msg/srv/detail/srv_arduino__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cv_msg
{

namespace srv
{

namespace builder
{

class Init_SrvArduino_Request_speed
{
public:
  explicit Init_SrvArduino_Request_speed(::cv_msg::srv::SrvArduino_Request & msg)
  : msg_(msg)
  {}
  ::cv_msg::srv::SrvArduino_Request speed(::cv_msg::srv::SrvArduino_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cv_msg::srv::SrvArduino_Request msg_;
};

class Init_SrvArduino_Request_dir
{
public:
  Init_SrvArduino_Request_dir()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrvArduino_Request_speed dir(::cv_msg::srv::SrvArduino_Request::_dir_type arg)
  {
    msg_.dir = std::move(arg);
    return Init_SrvArduino_Request_speed(msg_);
  }

private:
  ::cv_msg::srv::SrvArduino_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cv_msg::srv::SrvArduino_Request>()
{
  return cv_msg::srv::builder::Init_SrvArduino_Request_dir();
}

}  // namespace cv_msg


namespace cv_msg
{

namespace srv
{

namespace builder
{

class Init_SrvArduino_Response_answer
{
public:
  Init_SrvArduino_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cv_msg::srv::SrvArduino_Response answer(::cv_msg::srv::SrvArduino_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cv_msg::srv::SrvArduino_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cv_msg::srv::SrvArduino_Response>()
{
  return cv_msg::srv::builder::Init_SrvArduino_Response_answer();
}

}  // namespace cv_msg

#endif  // CV_MSG__SRV__DETAIL__SRV_ARDUINO__BUILDER_HPP_
