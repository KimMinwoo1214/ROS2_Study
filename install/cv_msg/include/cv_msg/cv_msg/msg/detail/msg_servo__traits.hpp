// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cv_msg:msg/MsgServo.idl
// generated code does not contain a copyright notice

#ifndef CV_MSG__MSG__DETAIL__MSG_SERVO__TRAITS_HPP_
#define CV_MSG__MSG__DETAIL__MSG_SERVO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cv_msg/msg/detail/msg_servo__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cv_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MsgServo & msg,
  std::ostream & out)
{
  out << "{";
  // member: degree
  {
    out << "degree: ";
    rosidl_generator_traits::value_to_yaml(msg.degree, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MsgServo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: degree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "degree: ";
    rosidl_generator_traits::value_to_yaml(msg.degree, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MsgServo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cv_msg

namespace rosidl_generator_traits
{

[[deprecated("use cv_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cv_msg::msg::MsgServo & msg,
  std::ostream & out, size_t indentation = 0)
{
  cv_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cv_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const cv_msg::msg::MsgServo & msg)
{
  return cv_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cv_msg::msg::MsgServo>()
{
  return "cv_msg::msg::MsgServo";
}

template<>
inline const char * name<cv_msg::msg::MsgServo>()
{
  return "cv_msg/msg/MsgServo";
}

template<>
struct has_fixed_size<cv_msg::msg::MsgServo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cv_msg::msg::MsgServo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cv_msg::msg::MsgServo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CV_MSG__MSG__DETAIL__MSG_SERVO__TRAITS_HPP_
