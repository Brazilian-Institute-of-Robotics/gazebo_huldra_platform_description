// Copyright (c) 2024, SENAI Cimatec
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

#ifndef PACKAGE_TEMPLATE_ROS_CPP__PACKAGE_TEMPLATE_ROS_CPP_HPP_
#define PACKAGE_TEMPLATE_ROS_CPP__PACKAGE_TEMPLATE_ROS_CPP_HPP_

#include <string>

namespace package_template_ros_cpp
{
class PackageTemplate
{
public:
  PackageTemplate();
  std::string getHelloMessage() const;
};
}  //  namespace package_template_ros_cpp

#endif  //  PACKAGE_TEMPLATE_ROS_CPP__PACKAGE_TEMPLATE_ROS_CPP_HPP_
