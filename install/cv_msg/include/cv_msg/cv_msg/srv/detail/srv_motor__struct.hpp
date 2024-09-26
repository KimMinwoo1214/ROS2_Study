// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cv_msg:srv/SrvMotor.idl
// generated code does not contain a copyright notice

#ifndef CV_MSG__SRV__DETAIL__SRV_MOTOR__STRUCT_HPP_
#define CV_MSG__SRV__DETAIL__SRV_MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cv_msg__srv__SrvMotor_Request __attribute__((deprecated))
#else
# define DEPRECATED__cv_msg__srv__SrvMotor_Request __declspec(deprecated)
#endif

namespace cv_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SrvMotor_Request_
{
  using Type = SrvMotor_Request_<ContainerAllocator>;

  explicit SrvMotor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dir = 0ll;
      this->speed = 0ll;
    }
  }

  explicit SrvMotor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dir = 0ll;
      this->speed = 0ll;
    }
  }

  // field types and members
  using _dir_type =
    int64_t;
  _dir_type dir;
  using _speed_type =
    int64_t;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__dir(
    const int64_t & _arg)
  {
    this->dir = _arg;
    return *this;
  }
  Type & set__speed(
    const int64_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cv_msg::srv::SrvMotor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cv_msg::srv::SrvMotor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cv_msg::srv::SrvMotor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cv_msg::srv::SrvMotor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cv_msg::srv::SrvMotor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cv_msg::srv::SrvMotor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cv_msg::srv::SrvMotor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cv_msg::srv::SrvMotor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cv_msg::srv::SrvMotor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cv_msg::srv::SrvMotor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cv_msg__srv__SrvMotor_Request
    std::shared_ptr<cv_msg::srv::SrvMotor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cv_msg__srv__SrvMotor_Request
    std::shared_ptr<cv_msg::srv::SrvMotor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrvMotor_Request_ & other) const
  {
    if (this->dir != other.dir) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrvMotor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrvMotor_Request_

// alias to use template instance with default allocator
using SrvMotor_Request =
  cv_msg::srv::SrvMotor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cv_msg


#ifndef _WIN32
# define DEPRECATED__cv_msg__srv__SrvMotor_Response __attribute__((deprecated))
#else
# define DEPRECATED__cv_msg__srv__SrvMotor_Response __declspec(deprecated)
#endif

namespace cv_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SrvMotor_Response_
{
  using Type = SrvMotor_Response_<ContainerAllocator>;

  explicit SrvMotor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = 0ll;
    }
  }

  explicit SrvMotor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = 0ll;
    }
  }

  // field types and members
  using _answer_type =
    int64_t;
  _answer_type answer;

  // setters for named parameter idiom
  Type & set__answer(
    const int64_t & _arg)
  {
    this->answer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cv_msg::srv::SrvMotor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cv_msg::srv::SrvMotor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cv_msg::srv::SrvMotor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cv_msg::srv::SrvMotor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cv_msg::srv::SrvMotor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cv_msg::srv::SrvMotor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cv_msg::srv::SrvMotor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cv_msg::srv::SrvMotor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cv_msg::srv::SrvMotor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cv_msg::srv::SrvMotor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cv_msg__srv__SrvMotor_Response
    std::shared_ptr<cv_msg::srv::SrvMotor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cv_msg__srv__SrvMotor_Response
    std::shared_ptr<cv_msg::srv::SrvMotor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrvMotor_Response_ & other) const
  {
    if (this->answer != other.answer) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrvMotor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrvMotor_Response_

// alias to use template instance with default allocator
using SrvMotor_Response =
  cv_msg::srv::SrvMotor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cv_msg

namespace cv_msg
{

namespace srv
{

struct SrvMotor
{
  using Request = cv_msg::srv::SrvMotor_Request;
  using Response = cv_msg::srv::SrvMotor_Response;
};

}  // namespace srv

}  // namespace cv_msg

#endif  // CV_MSG__SRV__DETAIL__SRV_MOTOR__STRUCT_HPP_
