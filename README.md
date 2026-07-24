# package_template_ros_cpp

## Overview

- The `package_template_ros_cpp` package is a basic template for creating ROS (Robot Operating System) packages using C++. It provides the essential structure and configuration files needed to start developing ROS nodes in C++. Ideal for developers looking for a standardized and well-organized starting point for their robotics projects.

## License

The source code is released under [Apache License 2.0](LICENSE).

**Affiliation:** SENAI CIMATEC \
**Maintainer:** Autor, autor@fieb.org.br

The `package_template_ros_cpp` package has been tested under:

- ROS 2 [Jazzy Jalisco](https://docs.ros.org/en/jazzy/Releases/Release-Jazzy-Jalisco.html) and Ubuntu 24.04 LTS (Noble Numbat)


### Projects Development Status

| Repository | Latest | Linters |  Doxygen |  Coverage |
|---         |---     |---    |--- |--- |
| `package_template_ros_cpp`| [![Jazzy](https://github.com/Brazilian-Institute-of-Robotics/package_template_ros_cpp/actions/workflows/colcon-action-runner.yaml/badge.svg)](https://github.com/Brazilian-Institute-of-Robotics/package_template_ros_cpp/actions/workflows/colcon-action-runner.yaml) | [![lints runners](https://github.com/Brazilian-Institute-of-Robotics/package_template_ros_cpp/actions/workflows/runner-ci-lint.yaml/badge.svg)](https://github.com/Brazilian-Institute-of-Robotics/package_template_ros_cpp/actions/workflows/runner-ci-lint.yaml) | N/A. | N/A. |

<!--Internal and external dependencies -->
### Dependencies

```sh
  $ sudo apt update
  $ sudo apt-get install <packages>
```

<!--remove this list, it is only here as a checklist -->
### Package layout

```
  - src: contains all C and C++ code
  - include/\<package name\>: contains all C and C++ headers which are installed; for all installed headers, they should be folder-namespaced by the package name
  - test: contains all automated tests and test data
  - config: contains configuration files, e.g. YAML parameter files and RViz config files
  - doc: contains all the documentation
  - launch: contains all launch files
  - package.xml: as defined by REP-0140 (may be updated for prototyping)
  - CMakeLists.txt: only for ROS packages that use CMake
  - README: can be rendered on GitHub as a landing page for the project. This can be as short or detailed as is convenient, but it should at least link to the project documentation. Consider putting a CI or code coverage badge in this README
  - CONTRIBUTING: describes the contribution guidelines
  - LICENSE: a copy of the license or licenses for this package
  - CHANGELOG.rst: REP-0132 compliant changelog
```
### Install and Build
  - [Install ROS 2](https://docs.ros.org/en/jazzy/Installation/Ubuntu-Install-Debians.html)

- **Building with colcon**

  - To build from source, clone the latest version from this repository into your `colcon` workspace and compile the package using

```sh
  cd your_workspace/src
  git clone https://github.com/Brazilian-Institute-of-Robotics/package_template_ros_cpp.git
  cd your_workspace
  source /opt/ros/${ROS_DISTRO}/setup.bash
  colcon build --packages-select package_template_ros_cpp --event-handlers console_direct+
```
- **Building from autoproj**

  - See build configuration based on autoproj

  - After Installation and configuration of autoproj, run the following commands:

```sh
  cd YOUR_WORKSPACE
  source env.sh
  amake package_template_ros_cpp
  source devel/setup.bash
```


### Unit Tests

- Run the unit tests with `colcon`

```sh
    cd YOUR_WORKSPACE
    source /opt/ros/${ROS_DISTRO}/setup.bash
    colcon build --packages-select package_template_ros_cpp \
      --event-handlers console_direct+
    colcon test  --packages-select package_template_ros_cpp \
      --event-handlers console_direct+
    colcon test-result --verbose --all
```

- Run the unit tests with `autoproj`

```sh
    cd YOUR_WORKSPACE
    source env.sh
    autoproj test enable package_template_ros_cpp
    amake package_template_ros_cpp
    autoproj test exec package_template_ros_cpp --verbose
```
<!-- Communication Description (Topics, Services and Actions) with interfaces used:-->
## Launch file
  - N/A

## Bugs & Feature Requests

- Please report bugs and request features using the [Issue Tracker](https://github.com/Brazilian-Institute-of-Robotics/package_template_ros_cpp/issues).
