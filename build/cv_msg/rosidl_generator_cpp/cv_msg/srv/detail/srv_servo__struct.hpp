// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cv_msg:srv/SrvServo.idl
// generated code does not contain a copyright notice

#ifndef CV_MSG__SRV__DETAIL__SRV_SERVO__STRUCT_HPP_
#define CV_MSG__SRV__DETAIL__SRV_SERVO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cv_msg__srv__SrvServo_Request __attribute__((deprecated))
#else
# define DEPRECATED__cv_msg__srv__SrvServo_Request __declspec(deprecated)
#endif

namespace cv_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SrvServo_Request_
{
  using Type = SrvServo_Request_<ContainerAllocator>;

  explicit SrvServo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->degree = 0ll;
    }
  }

  explicit SrvServo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    cv_msg::srv::SrvServo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cv_msg::srv::SrvServo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cv_msg::srv::SrvServo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cv_msg::srv::SrvServo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cv_msg::srv::SrvServo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cv_msg::srv::SrvServo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cv_msg::srv::SrvServo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cv_msg::srv::SrvServo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cv_msg::srv::SrvServo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cv_msg::srv::SrvServo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cv_msg__srv__SrvServo_Request
    std::shared_ptr<cv_msg::srv::SrvServo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cv_msg__srv__SrvServo_Request
    std::shared_ptr<cv_msg::srv::SrvServo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrvServo_Request_ & other) const
  {
    if (this->degree != other.degree) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrvServo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrvServo_Request_

// alias to use template instance with default allocator
using SrvServo_Request =
  cv_msg::srv::SrvServo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cv_msg


#ifndef _WIN32
# define DEPRECATED__cv_msg__srv__SrvServo_Response __attribute__((deprecated))
#else
# define DEPRECATED__cv_msg__srv__SrvServo_Response __declspec(deprecated)
#endif

namespace cv_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SrvServo_Response_
{
  using Type = SrvServo_Response_<ContainerAllocator>;

  explicit SrvServo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
    }
  }

  explicit SrvServo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
    }
  }

  // field types and members
  using _result_type =
    int64_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int64_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cv_msg::srv::SrvServo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cv_msg::srv::SrvServo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cv_msg::srv::SrvServo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cv_msg::srv::SrvServo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cv_msg::srv::SrvServo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cv_msg::srv::SrvServo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cv_msg::srv::SrvServo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cv_msg::srv::SrvServo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cv_msg::srv::SrvServo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cv_msg::srv::SrvServo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cv_msg__srv__SrvServo_Response
    std::shared_ptr<cv_msg::srv::SrvServo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cv_msg__srv__SrvServo_Response
    std::shared_ptr<cv_msg::srv::SrvServo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrvServo_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrvServo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrvServo_Response_

// alias to use template instance with default allocator
using SrvServo_Response =
  cv_msg::srv::SrvServo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cv_msg

namespace cv_msg
{

namespace srv
{

struct SrvServo
{
  using Request = cv_msg::srv::SrvServo_Request;
  using Response = cv_msg::srv::SrvServo_Response;
};

}  // namespace srv

}  // namespace cv_msg

#endif  // CV_MSG__SRV__DETAIL__SRV_SERVO__STRUCT_HPP_
