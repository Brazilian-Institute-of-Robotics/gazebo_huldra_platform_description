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


#include <iostream>

#include <rclcpp/rclcpp.hpp>

#include "package_template_ros_cpp/package_template_ros_cpp.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);

  try {
    package_template_ros_cpp::PackageTemplate pkg_template;

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("package_template");
    auto executor = std::make_shared<rclcpp::executors::SingleThreadedExecutor>();
    executor->add_node(node);
    executor->spin();

    RCLCPP_INFO(
      rclcpp::get_logger("package_template"), "%s",
      pkg_template.getHelloMessage().c_str());
  } catch (const std::exception & e) {
    RCLCPP_ERROR(rclcpp::get_logger("main"), "%s", e.what());
    rclcpp::shutdown();
    return 1;
  }

  rclcpp::shutdown();
  return 0;
}
