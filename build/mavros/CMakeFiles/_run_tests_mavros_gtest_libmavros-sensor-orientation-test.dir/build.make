# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cheng/fault_tolerant_control/src/mavros/mavros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cheng/fault_tolerant_control/build/mavros

# Utility rule file for _run_tests_mavros_gtest_libmavros-sensor-orientation-test.

# Include the progress variables for this target.
include CMakeFiles/_run_tests_mavros_gtest_libmavros-sensor-orientation-test.dir/progress.make

CMakeFiles/_run_tests_mavros_gtest_libmavros-sensor-orientation-test:
	catkin_generated/env_cached.sh /usr/bin/python2 /opt/ros/melodic/share/catkin/cmake/test/run_tests.py /home/cheng/fault_tolerant_control/build/mavros/test_results/mavros/gtest-libmavros-sensor-orientation-test.xml "/home/cheng/fault_tolerant_control/devel/.private/mavros/lib/mavros/libmavros-sensor-orientation-test --gtest_output=xml:/home/cheng/fault_tolerant_control/build/mavros/test_results/mavros/gtest-libmavros-sensor-orientation-test.xml"

_run_tests_mavros_gtest_libmavros-sensor-orientation-test: CMakeFiles/_run_tests_mavros_gtest_libmavros-sensor-orientation-test
_run_tests_mavros_gtest_libmavros-sensor-orientation-test: CMakeFiles/_run_tests_mavros_gtest_libmavros-sensor-orientation-test.dir/build.make

.PHONY : _run_tests_mavros_gtest_libmavros-sensor-orientation-test

# Rule to build all files generated by this target.
CMakeFiles/_run_tests_mavros_gtest_libmavros-sensor-orientation-test.dir/build: _run_tests_mavros_gtest_libmavros-sensor-orientation-test

.PHONY : CMakeFiles/_run_tests_mavros_gtest_libmavros-sensor-orientation-test.dir/build

CMakeFiles/_run_tests_mavros_gtest_libmavros-sensor-orientation-test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/_run_tests_mavros_gtest_libmavros-sensor-orientation-test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/_run_tests_mavros_gtest_libmavros-sensor-orientation-test.dir/clean

CMakeFiles/_run_tests_mavros_gtest_libmavros-sensor-orientation-test.dir/depend:
	cd /home/cheng/fault_tolerant_control/build/mavros && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cheng/fault_tolerant_control/src/mavros/mavros /home/cheng/fault_tolerant_control/src/mavros/mavros /home/cheng/fault_tolerant_control/build/mavros /home/cheng/fault_tolerant_control/build/mavros /home/cheng/fault_tolerant_control/build/mavros/CMakeFiles/_run_tests_mavros_gtest_libmavros-sensor-orientation-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/_run_tests_mavros_gtest_libmavros-sensor-orientation-test.dir/depend

