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
CMAKE_SOURCE_DIR = /home/cheng/fault_tolerant_control/src/mavlink

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cheng/fault_tolerant_control/build/mavlink

# Utility rule file for common.xml-v1.0.

# Include the progress variables for this target.
include CMakeFiles/common.xml-v1.0.dir/progress.make

CMakeFiles/common.xml-v1.0: include/v1.0/common/common.h


include/v1.0/common/common.h: /home/cheng/fault_tolerant_control/src/mavlink/message_definitions/v1.0/common.xml
include/v1.0/common/common.h: /home/cheng/fault_tolerant_control/src/mavlink/message_definitions/v1.0/common.xml
include/v1.0/common/common.h: /home/cheng/fault_tolerant_control/src/mavlink/pymavlink/tools/mavgen.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cheng/fault_tolerant_control/build/mavlink/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating include/v1.0/common/common.h"
	/usr/bin/env PYTHONPATH="/home/cheng/fault_tolerant_control/src/mavlink:/opt/ros/melodic/lib/python2.7/dist-packages" /usr/bin/python2.7 /home/cheng/fault_tolerant_control/src/mavlink/pymavlink/tools/mavgen.py --lang=C --wire-protocol=1.0 --output=include/v1.0 /home/cheng/fault_tolerant_control/src/mavlink/message_definitions/v1.0/common.xml

common.xml-v1.0: CMakeFiles/common.xml-v1.0
common.xml-v1.0: include/v1.0/common/common.h
common.xml-v1.0: CMakeFiles/common.xml-v1.0.dir/build.make

.PHONY : common.xml-v1.0

# Rule to build all files generated by this target.
CMakeFiles/common.xml-v1.0.dir/build: common.xml-v1.0

.PHONY : CMakeFiles/common.xml-v1.0.dir/build

CMakeFiles/common.xml-v1.0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/common.xml-v1.0.dir/cmake_clean.cmake
.PHONY : CMakeFiles/common.xml-v1.0.dir/clean

CMakeFiles/common.xml-v1.0.dir/depend:
	cd /home/cheng/fault_tolerant_control/build/mavlink && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cheng/fault_tolerant_control/src/mavlink /home/cheng/fault_tolerant_control/src/mavlink /home/cheng/fault_tolerant_control/build/mavlink /home/cheng/fault_tolerant_control/build/mavlink /home/cheng/fault_tolerant_control/build/mavlink/CMakeFiles/common.xml-v1.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/common.xml-v1.0.dir/depend

