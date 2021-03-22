// Copyright 2021 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RCLPY__UTILS_HPP_
#define RCLPY__UTILS_HPP_

#include <pybind11/pybind11.h>

#include <rcl/graph.h>  // rcl_names_and_types_t

namespace py = pybind11;

namespace rclpy
{

/// Convert a C rcl_names_and_types_t into a Python list.
/**
 * \param[in] names_and_types The names and types struct to convert.
 * \return List of tuples, where the first element of each tuple is a string
 *   for the name and the second element is a list of strings for the types.
 */
py::list
convert_to_py_names_and_types(const rcl_names_and_types_t * topic_names_and_types);

}  // namespace rclpy

#endif  // RCLPY__UTILS_HPP_