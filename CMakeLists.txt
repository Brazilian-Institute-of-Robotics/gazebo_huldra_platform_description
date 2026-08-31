cmake_minimum_required(VERSION 3.8)
project(gazebo_huldra_platform_description)

find_package(ament_cmake REQUIRED)

install(
  DIRECTORY models worlds launch THIRD_PARTY_LICENSES
  DESTINATION share/${PROJECT_NAME}
  PATTERN "*~" EXCLUDE
)

install(
  FILES LICENSE NOTICE
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
