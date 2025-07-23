// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from skynet_msgs:srv/SetOled.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "skynet_msgs/srv/set_oled.h"


#ifndef SKYNET_MSGS__SRV__DETAIL__SET_OLED__STRUCT_H_
#define SKYNET_MSGS__SRV__DETAIL__SET_OLED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetOled in the package skynet_msgs.
typedef struct skynet_msgs__srv__SetOled_Request
{
  uint8_t oled_flag;
} skynet_msgs__srv__SetOled_Request;

// Struct for a sequence of skynet_msgs__srv__SetOled_Request.
typedef struct skynet_msgs__srv__SetOled_Request__Sequence
{
  skynet_msgs__srv__SetOled_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} skynet_msgs__srv__SetOled_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetOled in the package skynet_msgs.
typedef struct skynet_msgs__srv__SetOled_Response
{
  bool success;
} skynet_msgs__srv__SetOled_Response;

// Struct for a sequence of skynet_msgs__srv__SetOled_Response.
typedef struct skynet_msgs__srv__SetOled_Response__Sequence
{
  skynet_msgs__srv__SetOled_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} skynet_msgs__srv__SetOled_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  skynet_msgs__srv__SetOled_Event__request__MAX_SIZE = 1
};
// response
enum
{
  skynet_msgs__srv__SetOled_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetOled in the package skynet_msgs.
typedef struct skynet_msgs__srv__SetOled_Event
{
  service_msgs__msg__ServiceEventInfo info;
  skynet_msgs__srv__SetOled_Request__Sequence request;
  skynet_msgs__srv__SetOled_Response__Sequence response;
} skynet_msgs__srv__SetOled_Event;

// Struct for a sequence of skynet_msgs__srv__SetOled_Event.
typedef struct skynet_msgs__srv__SetOled_Event__Sequence
{
  skynet_msgs__srv__SetOled_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} skynet_msgs__srv__SetOled_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SKYNET_MSGS__SRV__DETAIL__SET_OLED__STRUCT_H_
