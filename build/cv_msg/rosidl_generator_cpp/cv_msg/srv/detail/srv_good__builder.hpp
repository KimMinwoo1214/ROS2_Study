// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cv_msg:srv/SrvGood.idl
// generated code does not contain a copyright notice

#ifndef CV_MSG__SRV__DETAIL__SRV_GOOD__BUILDER_HPP_
#define CV_MSG__SRV__DETAIL__SRV_GOOD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cv_msg/srv/detail/srv_good__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cv_msg
{

namespace srv
{

namespace builder
{

class Init_SrvGood_Request_c
{
public:
  explicit Init_SrvGood_Request_c(::cv_msg::srv::SrvGood_Request & msg)
  : msg_(msg)
  {}
  ::cv_msg::srv::SrvGood_Request c(::cv_msg::srv::SrvGood_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cv_msg::srv::SrvGood_Request msg_;
};

class Init_SrvGood_Request_b
{
public:
  explicit Init_SrvGood_Request_b(::cv_msg::srv::SrvGood_Request & msg)
  : msg_(msg)
  {}
  Init_SrvGood_Request_c b(::cv_msg::srv::SrvGood_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_SrvGood_Request_c(msg_);
  }

private:
  ::cv_msg::srv::SrvGood_Request msg_;
};

class Init_SrvGood_Request_a
{
public:
  Init_SrvGood_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrvGood_Request_b a(::cv_msg::srv::SrvGood_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_SrvGood_Request_b(msg_);
  }

private:
  ::cv_msg::srv::SrvGood_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cv_msg::srv::SrvGood_Request>()
{
  return cv_msg::srv::builder::Init_SrvGood_Request_a();
}

}  // namespace cv_msg


namespace cv_msg
{

namespace srv
{

namespace builder
{

class Init_SrvGood_Response_sum
{
public:
  Init_SrvGood_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cv_msg::srv::SrvGood_Response sum(::cv_msg::srv::SrvGood_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cv_msg::srv::SrvGood_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cv_msg::srv::SrvGood_Response>()
{
  return cv_msg::srv::builder::Init_SrvGood_Response_sum();
}

}  // namespace cv_msg

#endif  // CV_MSG__SRV__DETAIL__SRV_GOOD__BUILDER_HPP_
