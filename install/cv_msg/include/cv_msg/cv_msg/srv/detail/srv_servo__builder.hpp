// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cv_msg:srv/SrvServo.idl
// generated code does not contain a copyright notice

#ifndef CV_MSG__SRV__DETAIL__SRV_SERVO__BUILDER_HPP_
#define CV_MSG__SRV__DETAIL__SRV_SERVO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cv_msg/srv/detail/srv_servo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cv_msg
{

namespace srv
{

namespace builder
{

class Init_SrvServo_Request_degree
{
public:
  Init_SrvServo_Request_degree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cv_msg::srv::SrvServo_Request degree(::cv_msg::srv::SrvServo_Request::_degree_type arg)
  {
    msg_.degree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cv_msg::srv::SrvServo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cv_msg::srv::SrvServo_Request>()
{
  return cv_msg::srv::builder::Init_SrvServo_Request_degree();
}

}  // namespace cv_msg


namespace cv_msg
{

namespace srv
{

namespace builder
{

class Init_SrvServo_Response_result
{
public:
  Init_SrvServo_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cv_msg::srv::SrvServo_Response result(::cv_msg::srv::SrvServo_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cv_msg::srv::SrvServo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cv_msg::srv::SrvServo_Response>()
{
  return cv_msg::srv::builder::Init_SrvServo_Response_result();
}

}  // namespace cv_msg

#endif  // CV_MSG__SRV__DETAIL__SRV_SERVO__BUILDER_HPP_
