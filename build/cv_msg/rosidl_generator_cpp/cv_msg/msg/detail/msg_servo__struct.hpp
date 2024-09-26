// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cv_msg:msg/MsgServo.idl
// generated code does not contain a copyright notice

#ifndef CV_MSG__MSG__DETAIL__MSG_SERVO__STRUCT_HPP_
#define CV_MSG__MSG__DETAIL__MSG_SERVO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cv_msg__msg__MsgServo __attribute__((deprecated))
#else
# define DEPRECATED__cv_msg__msg__MsgServo __declspec(deprecated)
#endif

namespace cv_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MsgServo_
{
  using Type = MsgServo_<ContainerAllocator>;

  explicit MsgServo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->degree = 0ll;
    }
  }

  explicit MsgServo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->degree = 0ll;
    }
  }

  // field types and members
  using _degree_type =
    int64_t;
  _degree_type degree;

  // setters for named parameter idiom
  Type & set__degree(
    const int64_t & _arg)
  {
    this->degree = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cv_msg::msg::MsgServo_<ContainerAllocator> *;
  using ConstRawPtr =
    const cv_msg::msg::MsgServo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cv_msg::msg::MsgServo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cv_msg::msg::MsgServo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cv_msg::msg::MsgServo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cv_msg::msg::MsgServo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cv_msg::msg::MsgServo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cv_msg::msg::MsgServo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cv_msg::msg::MsgServo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cv_msg::msg::MsgServo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cv_msg__msg__MsgServo
    std::shared_ptr<cv_msg::msg::MsgServo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cv_msg__msg__MsgServo
    std::shared_ptr<cv_msg::msg::MsgServo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MsgServo_ & other) const
  {
    if (this->degree != other.degree) {
      return false;
    }
    return true;
  }
  bool operator!=(const MsgServo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MsgServo_

// alias to use template instance with default allocator
using MsgServo =
  cv_msg::msg::MsgServo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cv_msg

#endif  // CV_MSG__MSG__DETAIL__MSG_SERVO__STRUCT_HPP_
