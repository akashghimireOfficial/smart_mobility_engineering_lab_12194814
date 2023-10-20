// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fleet_action:action/FleetManagement.idl
// generated code does not contain a copyright notice

#ifndef FLEET_ACTION__ACTION__DETAIL__FLEET_MANAGEMENT__STRUCT_H_
#define FLEET_ACTION__ACTION__DETAIL__FLEET_MANAGEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/FleetManagement in the package fleet_action.
typedef struct fleet_action__action__FleetManagement_Goal
{
  int32_t fleet_size;
} fleet_action__action__FleetManagement_Goal;

// Struct for a sequence of fleet_action__action__FleetManagement_Goal.
typedef struct fleet_action__action__FleetManagement_Goal__Sequence
{
  fleet_action__action__FleetManagement_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_action__action__FleetManagement_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'routes'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/FleetManagement in the package fleet_action.
typedef struct fleet_action__action__FleetManagement_Result
{
  rosidl_runtime_c__String__Sequence routes;
} fleet_action__action__FleetManagement_Result;

// Struct for a sequence of fleet_action__action__FleetManagement_Result.
typedef struct fleet_action__action__FleetManagement_Result__Sequence
{
  fleet_action__action__FleetManagement_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_action__action__FleetManagement_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/FleetManagement in the package fleet_action.
typedef struct fleet_action__action__FleetManagement_Feedback
{
  float completion_percentage;
} fleet_action__action__FleetManagement_Feedback;

// Struct for a sequence of fleet_action__action__FleetManagement_Feedback.
typedef struct fleet_action__action__FleetManagement_Feedback__Sequence
{
  fleet_action__action__FleetManagement_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_action__action__FleetManagement_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "fleet_action/action/detail/fleet_management__struct.h"

/// Struct defined in action/FleetManagement in the package fleet_action.
typedef struct fleet_action__action__FleetManagement_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  fleet_action__action__FleetManagement_Goal goal;
} fleet_action__action__FleetManagement_SendGoal_Request;

// Struct for a sequence of fleet_action__action__FleetManagement_SendGoal_Request.
typedef struct fleet_action__action__FleetManagement_SendGoal_Request__Sequence
{
  fleet_action__action__FleetManagement_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_action__action__FleetManagement_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/FleetManagement in the package fleet_action.
typedef struct fleet_action__action__FleetManagement_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} fleet_action__action__FleetManagement_SendGoal_Response;

// Struct for a sequence of fleet_action__action__FleetManagement_SendGoal_Response.
typedef struct fleet_action__action__FleetManagement_SendGoal_Response__Sequence
{
  fleet_action__action__FleetManagement_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_action__action__FleetManagement_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/FleetManagement in the package fleet_action.
typedef struct fleet_action__action__FleetManagement_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} fleet_action__action__FleetManagement_GetResult_Request;

// Struct for a sequence of fleet_action__action__FleetManagement_GetResult_Request.
typedef struct fleet_action__action__FleetManagement_GetResult_Request__Sequence
{
  fleet_action__action__FleetManagement_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_action__action__FleetManagement_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "fleet_action/action/detail/fleet_management__struct.h"

/// Struct defined in action/FleetManagement in the package fleet_action.
typedef struct fleet_action__action__FleetManagement_GetResult_Response
{
  int8_t status;
  fleet_action__action__FleetManagement_Result result;
} fleet_action__action__FleetManagement_GetResult_Response;

// Struct for a sequence of fleet_action__action__FleetManagement_GetResult_Response.
typedef struct fleet_action__action__FleetManagement_GetResult_Response__Sequence
{
  fleet_action__action__FleetManagement_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_action__action__FleetManagement_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "fleet_action/action/detail/fleet_management__struct.h"

/// Struct defined in action/FleetManagement in the package fleet_action.
typedef struct fleet_action__action__FleetManagement_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  fleet_action__action__FleetManagement_Feedback feedback;
} fleet_action__action__FleetManagement_FeedbackMessage;

// Struct for a sequence of fleet_action__action__FleetManagement_FeedbackMessage.
typedef struct fleet_action__action__FleetManagement_FeedbackMessage__Sequence
{
  fleet_action__action__FleetManagement_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_action__action__FleetManagement_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEET_ACTION__ACTION__DETAIL__FLEET_MANAGEMENT__STRUCT_H_
