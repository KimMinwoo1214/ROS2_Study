// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cv_msg:srv/SrvGood.idl
// generated code does not contain a copyright notice

#ifndef CV_MSG__SRV__DETAIL__SRV_GOOD__TRAITS_HPP_
#define CV_MSG__SRV__DETAIL__SRV_GOOD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cv_msg/srv/detail/srv_good__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cv_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SrvGood_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrvGood_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrvGood_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cv_msg

namespace rosidl_generator_traits
{

[[deprecated("use cv_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cv_msg::srv::SrvGood_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cv_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cv_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const cv_msg::srv::SrvGood_Request & msg)
{
  return cv_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cv_msg::srv::SrvGood_Request>()
{
  return "cv_msg::srv::SrvGood_Request";
}

template<>
inline const char * name<cv_msg::srv::SrvGood_Request>()
{
  return "cv_msg/srv/SrvGood_Request";
}

template<>
struct has_fixed_size<cv_msg::srv::SrvGood_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cv_msg::srv::SrvGood_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cv_msg::srv::SrvGood_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cv_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SrvGood_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrvGood_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrvGood_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cv_msg

namespace rosidl_generator_traits
{

[[deprecated("use cv_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cv_msg::srv::SrvGood_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cv_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cv_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const cv_msg::srv::SrvGood_Response & msg)
{
  return cv_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cv_msg::srv::SrvGood_Response>()
{
  return "cv_msg::srv::SrvGood_Response";
}

template<>
inline const char * name<cv_msg::srv::SrvGood_Response>()
{
  return "cv_msg/srv/SrvGood_Response";
}

template<>
struct has_fixed_size<cv_msg::srv::SrvGood_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cv_msg::srv::SrvGood_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cv_msg::srv::SrvGood_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cv_msg::srv::SrvGood>()
{
  return "cv_msg::srv::SrvGood";
}

template<>
inline const char * name<cv_msg::srv::SrvGood>()
{
  return "cv_msg/srv/SrvGood";
}

template<>
struct has_fixed_size<cv_msg::srv::SrvGood>
  : std::integral_constant<
    bool,
    has_fixed_size<cv_msg::srv::SrvGood_Request>::value &&
    has_fixed_size<cv_msg::srv::SrvGood_Response>::value
  >
{
};

template<>
struct has_bounded_size<cv_msg::srv::SrvGood>
  : std::integral_constant<
    bool,
    has_bounded_size<cv_msg::srv::SrvGood_Request>::value &&
    has_bounded_size<cv_msg::srv::SrvGood_Response>::value
  >
{
};

template<>
struct is_service<cv_msg::srv::SrvGood>
  : std::true_type
{
};

template<>
struct is_service_request<cv_msg::srv::SrvGood_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cv_msg::srv::SrvGood_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CV_MSG__SRV__DETAIL__SRV_GOOD__TRAITS_HPP_
