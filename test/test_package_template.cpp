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

#include <gtest/gtest.h>

#include <rclcpp/rclcpp.hpp>

#include "package_template_ros_cpp/package_template_ros_cpp.hpp"

struct PackageTemplateTest : public testing::Test
{
  void SetUp() override
  {
  }

  void TearDown() override
  {
  }
};

TEST(PackageTemplateTest, ReturnsCorrectMessage) {
  package_template_ros_cpp::PackageTemplate pkg_template;
  EXPECT_EQ(pkg_template.getHelloMessage(), "Hello, World!");
}

int main(int argc, char ** argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
