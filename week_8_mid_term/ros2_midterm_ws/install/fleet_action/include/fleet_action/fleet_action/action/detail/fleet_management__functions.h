// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fleet_action:action/FleetManagement.idl
// generated code does not contain a copyright notice

#ifndef FLEET_ACTION__ACTION__DETAIL__FLEET_MANAGEMENT__FUNCTIONS_H_
#define FLEET_ACTION__ACTION__DETAIL__FLEET_MANAGEMENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fleet_action/msg/rosidl_generator_c__visibility_control.h"

#include "fleet_action/action/detail/fleet_management__struct.h"

/// Initialize action/FleetManagement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fleet_action__action__FleetManagement_Goal
 * )) before or use
 * fleet_action__action__FleetManagement_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Goal__init(fleet_action__action__FleetManagement_Goal * msg);

/// Finalize action/FleetManagement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_Goal__fini(fleet_action__action__FleetManagement_Goal * msg);

/// Create action/FleetManagement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fleet_action__action__FleetManagement_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_Goal *
fleet_action__action__FleetManagement_Goal__create();

/// Destroy action/FleetManagement message.
/**
 * It calls
 * fleet_action__action__FleetManagement_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_Goal__destroy(fleet_action__action__FleetManagement_Goal * msg);

/// Check for action/FleetManagement message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Goal__are_equal(const fleet_action__action__FleetManagement_Goal * lhs, const fleet_action__action__FleetManagement_Goal * rhs);

/// Copy a action/FleetManagement message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Goal__copy(
  const fleet_action__action__FleetManagement_Goal * input,
  fleet_action__action__FleetManagement_Goal * output);

/// Initialize array of action/FleetManagement messages.
/**
 * It allocates the memory for the number of elements and calls
 * fleet_action__action__FleetManagement_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Goal__Sequence__init(fleet_action__action__FleetManagement_Goal__Sequence * array, size_t size);

/// Finalize array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_Goal__Sequence__fini(fleet_action__action__FleetManagement_Goal__Sequence * array);

/// Create array of action/FleetManagement messages.
/**
 * It allocates the memory for the array and calls
 * fleet_action__action__FleetManagement_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_Goal__Sequence *
fleet_action__action__FleetManagement_Goal__Sequence__create(size_t size);

/// Destroy array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_Goal__Sequence__destroy(fleet_action__action__FleetManagement_Goal__Sequence * array);

/// Check for action/FleetManagement message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Goal__Sequence__are_equal(const fleet_action__action__FleetManagement_Goal__Sequence * lhs, const fleet_action__action__FleetManagement_Goal__Sequence * rhs);

/// Copy an array of action/FleetManagement messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Goal__Sequence__copy(
  const fleet_action__action__FleetManagement_Goal__Sequence * input,
  fleet_action__action__FleetManagement_Goal__Sequence * output);

/// Initialize action/FleetManagement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fleet_action__action__FleetManagement_Result
 * )) before or use
 * fleet_action__action__FleetManagement_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Result__init(fleet_action__action__FleetManagement_Result * msg);

/// Finalize action/FleetManagement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_Result__fini(fleet_action__action__FleetManagement_Result * msg);

/// Create action/FleetManagement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fleet_action__action__FleetManagement_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_Result *
fleet_action__action__FleetManagement_Result__create();

/// Destroy action/FleetManagement message.
/**
 * It calls
 * fleet_action__action__FleetManagement_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_Result__destroy(fleet_action__action__FleetManagement_Result * msg);

/// Check for action/FleetManagement message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Result__are_equal(const fleet_action__action__FleetManagement_Result * lhs, const fleet_action__action__FleetManagement_Result * rhs);

/// Copy a action/FleetManagement message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Result__copy(
  const fleet_action__action__FleetManagement_Result * input,
  fleet_action__action__FleetManagement_Result * output);

/// Initialize array of action/FleetManagement messages.
/**
 * It allocates the memory for the number of elements and calls
 * fleet_action__action__FleetManagement_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Result__Sequence__init(fleet_action__action__FleetManagement_Result__Sequence * array, size_t size);

/// Finalize array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_Result__Sequence__fini(fleet_action__action__FleetManagement_Result__Sequence * array);

/// Create array of action/FleetManagement messages.
/**
 * It allocates the memory for the array and calls
 * fleet_action__action__FleetManagement_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_Result__Sequence *
fleet_action__action__FleetManagement_Result__Sequence__create(size_t size);

/// Destroy array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_Result__Sequence__destroy(fleet_action__action__FleetManagement_Result__Sequence * array);

/// Check for action/FleetManagement message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Result__Sequence__are_equal(const fleet_action__action__FleetManagement_Result__Sequence * lhs, const fleet_action__action__FleetManagement_Result__Sequence * rhs);

/// Copy an array of action/FleetManagement messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Result__Sequence__copy(
  const fleet_action__action__FleetManagement_Result__Sequence * input,
  fleet_action__action__FleetManagement_Result__Sequence * output);

/// Initialize action/FleetManagement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fleet_action__action__FleetManagement_Feedback
 * )) before or use
 * fleet_action__action__FleetManagement_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Feedback__init(fleet_action__action__FleetManagement_Feedback * msg);

/// Finalize action/FleetManagement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_Feedback__fini(fleet_action__action__FleetManagement_Feedback * msg);

/// Create action/FleetManagement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fleet_action__action__FleetManagement_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_Feedback *
fleet_action__action__FleetManagement_Feedback__create();

/// Destroy action/FleetManagement message.
/**
 * It calls
 * fleet_action__action__FleetManagement_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_Feedback__destroy(fleet_action__action__FleetManagement_Feedback * msg);

/// Check for action/FleetManagement message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Feedback__are_equal(const fleet_action__action__FleetManagement_Feedback * lhs, const fleet_action__action__FleetManagement_Feedback * rhs);

/// Copy a action/FleetManagement message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Feedback__copy(
  const fleet_action__action__FleetManagement_Feedback * input,
  fleet_action__action__FleetManagement_Feedback * output);

/// Initialize array of action/FleetManagement messages.
/**
 * It allocates the memory for the number of elements and calls
 * fleet_action__action__FleetManagement_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Feedback__Sequence__init(fleet_action__action__FleetManagement_Feedback__Sequence * array, size_t size);

/// Finalize array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_Feedback__Sequence__fini(fleet_action__action__FleetManagement_Feedback__Sequence * array);

/// Create array of action/FleetManagement messages.
/**
 * It allocates the memory for the array and calls
 * fleet_action__action__FleetManagement_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_Feedback__Sequence *
fleet_action__action__FleetManagement_Feedback__Sequence__create(size_t size);

/// Destroy array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_Feedback__Sequence__destroy(fleet_action__action__FleetManagement_Feedback__Sequence * array);

/// Check for action/FleetManagement message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Feedback__Sequence__are_equal(const fleet_action__action__FleetManagement_Feedback__Sequence * lhs, const fleet_action__action__FleetManagement_Feedback__Sequence * rhs);

/// Copy an array of action/FleetManagement messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_Feedback__Sequence__copy(
  const fleet_action__action__FleetManagement_Feedback__Sequence * input,
  fleet_action__action__FleetManagement_Feedback__Sequence * output);

/// Initialize action/FleetManagement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fleet_action__action__FleetManagement_SendGoal_Request
 * )) before or use
 * fleet_action__action__FleetManagement_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_SendGoal_Request__init(fleet_action__action__FleetManagement_SendGoal_Request * msg);

/// Finalize action/FleetManagement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_SendGoal_Request__fini(fleet_action__action__FleetManagement_SendGoal_Request * msg);

/// Create action/FleetManagement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fleet_action__action__FleetManagement_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_SendGoal_Request *
fleet_action__action__FleetManagement_SendGoal_Request__create();

/// Destroy action/FleetManagement message.
/**
 * It calls
 * fleet_action__action__FleetManagement_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_SendGoal_Request__destroy(fleet_action__action__FleetManagement_SendGoal_Request * msg);

/// Check for action/FleetManagement message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_SendGoal_Request__are_equal(const fleet_action__action__FleetManagement_SendGoal_Request * lhs, const fleet_action__action__FleetManagement_SendGoal_Request * rhs);

/// Copy a action/FleetManagement message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_SendGoal_Request__copy(
  const fleet_action__action__FleetManagement_SendGoal_Request * input,
  fleet_action__action__FleetManagement_SendGoal_Request * output);

/// Initialize array of action/FleetManagement messages.
/**
 * It allocates the memory for the number of elements and calls
 * fleet_action__action__FleetManagement_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_SendGoal_Request__Sequence__init(fleet_action__action__FleetManagement_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_SendGoal_Request__Sequence__fini(fleet_action__action__FleetManagement_SendGoal_Request__Sequence * array);

/// Create array of action/FleetManagement messages.
/**
 * It allocates the memory for the array and calls
 * fleet_action__action__FleetManagement_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_SendGoal_Request__Sequence *
fleet_action__action__FleetManagement_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_SendGoal_Request__Sequence__destroy(fleet_action__action__FleetManagement_SendGoal_Request__Sequence * array);

/// Check for action/FleetManagement message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_SendGoal_Request__Sequence__are_equal(const fleet_action__action__FleetManagement_SendGoal_Request__Sequence * lhs, const fleet_action__action__FleetManagement_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/FleetManagement messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_SendGoal_Request__Sequence__copy(
  const fleet_action__action__FleetManagement_SendGoal_Request__Sequence * input,
  fleet_action__action__FleetManagement_SendGoal_Request__Sequence * output);

/// Initialize action/FleetManagement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fleet_action__action__FleetManagement_SendGoal_Response
 * )) before or use
 * fleet_action__action__FleetManagement_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_SendGoal_Response__init(fleet_action__action__FleetManagement_SendGoal_Response * msg);

/// Finalize action/FleetManagement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_SendGoal_Response__fini(fleet_action__action__FleetManagement_SendGoal_Response * msg);

/// Create action/FleetManagement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fleet_action__action__FleetManagement_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_SendGoal_Response *
fleet_action__action__FleetManagement_SendGoal_Response__create();

/// Destroy action/FleetManagement message.
/**
 * It calls
 * fleet_action__action__FleetManagement_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_SendGoal_Response__destroy(fleet_action__action__FleetManagement_SendGoal_Response * msg);

/// Check for action/FleetManagement message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_SendGoal_Response__are_equal(const fleet_action__action__FleetManagement_SendGoal_Response * lhs, const fleet_action__action__FleetManagement_SendGoal_Response * rhs);

/// Copy a action/FleetManagement message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_SendGoal_Response__copy(
  const fleet_action__action__FleetManagement_SendGoal_Response * input,
  fleet_action__action__FleetManagement_SendGoal_Response * output);

/// Initialize array of action/FleetManagement messages.
/**
 * It allocates the memory for the number of elements and calls
 * fleet_action__action__FleetManagement_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_SendGoal_Response__Sequence__init(fleet_action__action__FleetManagement_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_SendGoal_Response__Sequence__fini(fleet_action__action__FleetManagement_SendGoal_Response__Sequence * array);

/// Create array of action/FleetManagement messages.
/**
 * It allocates the memory for the array and calls
 * fleet_action__action__FleetManagement_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_SendGoal_Response__Sequence *
fleet_action__action__FleetManagement_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_SendGoal_Response__Sequence__destroy(fleet_action__action__FleetManagement_SendGoal_Response__Sequence * array);

/// Check for action/FleetManagement message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_SendGoal_Response__Sequence__are_equal(const fleet_action__action__FleetManagement_SendGoal_Response__Sequence * lhs, const fleet_action__action__FleetManagement_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/FleetManagement messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_SendGoal_Response__Sequence__copy(
  const fleet_action__action__FleetManagement_SendGoal_Response__Sequence * input,
  fleet_action__action__FleetManagement_SendGoal_Response__Sequence * output);

/// Initialize action/FleetManagement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fleet_action__action__FleetManagement_GetResult_Request
 * )) before or use
 * fleet_action__action__FleetManagement_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_GetResult_Request__init(fleet_action__action__FleetManagement_GetResult_Request * msg);

/// Finalize action/FleetManagement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_GetResult_Request__fini(fleet_action__action__FleetManagement_GetResult_Request * msg);

/// Create action/FleetManagement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fleet_action__action__FleetManagement_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_GetResult_Request *
fleet_action__action__FleetManagement_GetResult_Request__create();

/// Destroy action/FleetManagement message.
/**
 * It calls
 * fleet_action__action__FleetManagement_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_GetResult_Request__destroy(fleet_action__action__FleetManagement_GetResult_Request * msg);

/// Check for action/FleetManagement message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_GetResult_Request__are_equal(const fleet_action__action__FleetManagement_GetResult_Request * lhs, const fleet_action__action__FleetManagement_GetResult_Request * rhs);

/// Copy a action/FleetManagement message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_GetResult_Request__copy(
  const fleet_action__action__FleetManagement_GetResult_Request * input,
  fleet_action__action__FleetManagement_GetResult_Request * output);

/// Initialize array of action/FleetManagement messages.
/**
 * It allocates the memory for the number of elements and calls
 * fleet_action__action__FleetManagement_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_GetResult_Request__Sequence__init(fleet_action__action__FleetManagement_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_GetResult_Request__Sequence__fini(fleet_action__action__FleetManagement_GetResult_Request__Sequence * array);

/// Create array of action/FleetManagement messages.
/**
 * It allocates the memory for the array and calls
 * fleet_action__action__FleetManagement_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_GetResult_Request__Sequence *
fleet_action__action__FleetManagement_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_GetResult_Request__Sequence__destroy(fleet_action__action__FleetManagement_GetResult_Request__Sequence * array);

/// Check for action/FleetManagement message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_GetResult_Request__Sequence__are_equal(const fleet_action__action__FleetManagement_GetResult_Request__Sequence * lhs, const fleet_action__action__FleetManagement_GetResult_Request__Sequence * rhs);

/// Copy an array of action/FleetManagement messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_GetResult_Request__Sequence__copy(
  const fleet_action__action__FleetManagement_GetResult_Request__Sequence * input,
  fleet_action__action__FleetManagement_GetResult_Request__Sequence * output);

/// Initialize action/FleetManagement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fleet_action__action__FleetManagement_GetResult_Response
 * )) before or use
 * fleet_action__action__FleetManagement_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_GetResult_Response__init(fleet_action__action__FleetManagement_GetResult_Response * msg);

/// Finalize action/FleetManagement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_GetResult_Response__fini(fleet_action__action__FleetManagement_GetResult_Response * msg);

/// Create action/FleetManagement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fleet_action__action__FleetManagement_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_GetResult_Response *
fleet_action__action__FleetManagement_GetResult_Response__create();

/// Destroy action/FleetManagement message.
/**
 * It calls
 * fleet_action__action__FleetManagement_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_GetResult_Response__destroy(fleet_action__action__FleetManagement_GetResult_Response * msg);

/// Check for action/FleetManagement message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_GetResult_Response__are_equal(const fleet_action__action__FleetManagement_GetResult_Response * lhs, const fleet_action__action__FleetManagement_GetResult_Response * rhs);

/// Copy a action/FleetManagement message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_GetResult_Response__copy(
  const fleet_action__action__FleetManagement_GetResult_Response * input,
  fleet_action__action__FleetManagement_GetResult_Response * output);

/// Initialize array of action/FleetManagement messages.
/**
 * It allocates the memory for the number of elements and calls
 * fleet_action__action__FleetManagement_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_GetResult_Response__Sequence__init(fleet_action__action__FleetManagement_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_GetResult_Response__Sequence__fini(fleet_action__action__FleetManagement_GetResult_Response__Sequence * array);

/// Create array of action/FleetManagement messages.
/**
 * It allocates the memory for the array and calls
 * fleet_action__action__FleetManagement_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_GetResult_Response__Sequence *
fleet_action__action__FleetManagement_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_GetResult_Response__Sequence__destroy(fleet_action__action__FleetManagement_GetResult_Response__Sequence * array);

/// Check for action/FleetManagement message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_GetResult_Response__Sequence__are_equal(const fleet_action__action__FleetManagement_GetResult_Response__Sequence * lhs, const fleet_action__action__FleetManagement_GetResult_Response__Sequence * rhs);

/// Copy an array of action/FleetManagement messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_GetResult_Response__Sequence__copy(
  const fleet_action__action__FleetManagement_GetResult_Response__Sequence * input,
  fleet_action__action__FleetManagement_GetResult_Response__Sequence * output);

/// Initialize action/FleetManagement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fleet_action__action__FleetManagement_FeedbackMessage
 * )) before or use
 * fleet_action__action__FleetManagement_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_FeedbackMessage__init(fleet_action__action__FleetManagement_FeedbackMessage * msg);

/// Finalize action/FleetManagement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_FeedbackMessage__fini(fleet_action__action__FleetManagement_FeedbackMessage * msg);

/// Create action/FleetManagement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fleet_action__action__FleetManagement_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_FeedbackMessage *
fleet_action__action__FleetManagement_FeedbackMessage__create();

/// Destroy action/FleetManagement message.
/**
 * It calls
 * fleet_action__action__FleetManagement_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_FeedbackMessage__destroy(fleet_action__action__FleetManagement_FeedbackMessage * msg);

/// Check for action/FleetManagement message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_FeedbackMessage__are_equal(const fleet_action__action__FleetManagement_FeedbackMessage * lhs, const fleet_action__action__FleetManagement_FeedbackMessage * rhs);

/// Copy a action/FleetManagement message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_FeedbackMessage__copy(
  const fleet_action__action__FleetManagement_FeedbackMessage * input,
  fleet_action__action__FleetManagement_FeedbackMessage * output);

/// Initialize array of action/FleetManagement messages.
/**
 * It allocates the memory for the number of elements and calls
 * fleet_action__action__FleetManagement_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_FeedbackMessage__Sequence__init(fleet_action__action__FleetManagement_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_FeedbackMessage__Sequence__fini(fleet_action__action__FleetManagement_FeedbackMessage__Sequence * array);

/// Create array of action/FleetManagement messages.
/**
 * It allocates the memory for the array and calls
 * fleet_action__action__FleetManagement_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
fleet_action__action__FleetManagement_FeedbackMessage__Sequence *
fleet_action__action__FleetManagement_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/FleetManagement messages.
/**
 * It calls
 * fleet_action__action__FleetManagement_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
void
fleet_action__action__FleetManagement_FeedbackMessage__Sequence__destroy(fleet_action__action__FleetManagement_FeedbackMessage__Sequence * array);

/// Check for action/FleetManagement message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_FeedbackMessage__Sequence__are_equal(const fleet_action__action__FleetManagement_FeedbackMessage__Sequence * lhs, const fleet_action__action__FleetManagement_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/FleetManagement messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleet_action
bool
fleet_action__action__FleetManagement_FeedbackMessage__Sequence__copy(
  const fleet_action__action__FleetManagement_FeedbackMessage__Sequence * input,
  fleet_action__action__FleetManagement_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FLEET_ACTION__ACTION__DETAIL__FLEET_MANAGEMENT__FUNCTIONS_H_
