
#### **Overview**

- \<Overview for request or description for added feature.\>
- \<Briefly describe the feature, a short description of the requested feature.
        Images can be included to improve the understanding of the functionality.\>

#### **Use the following settings in the overrides file for docker testing**

- Use these settings to compile and run the module using `autoproj`.
- The contents of the files manifest and `overrides.yaml` must be changed according to the `templates` below.
- Additional packages may be needed to test this module.

  e.g.,

- _overrides.yaml_

  ```yaml
    overrides:
      - <package_name>:
        branch: <branch>
  ```

- _manifest_

  ```yaml
      package_sets:
        - github: Brazilian-Institute-of-Robotics/python.base-package_set
          branch: main
          private: true
        - github: Brazilian-Institute-of-Robotics/ros2.colcon-package_set
          branch: main
          private: true
        - github: Brazilian-Institute-of-Robotics/ros2.distro-package_set
          branch: main
          private: true
        - github: Brazilian-Institute-of-Robotics/core_base-package_set
          branch: main
          private: true
        - github: Brazilian-Institute-of-Robotics/ros2.gazebo-package_set
          branch: main
          private: true
        - github: Brazilian-Institute-of-Robotics/commons_plugin_package_set
          private: true
          branch: main
        - github: Brazilian-Institute-of-Robotics/<package_name>_set
          branch: main
          private: true
      layout:
        - <package_name>
  ```

#### **What was added/changed in this update**

- \<Use the commit messages to describe what was included.\>

#### **Depends On:**

- \<Inform if there is a dependency on other pull requests.\>

#### **Related Issues:**

- \<Inform if the pull request is associated with issues.\>

#### **Notes:**

- Include notes and notes specific to this pull request here, if not, include the expression N/A. (Not Applicable)
