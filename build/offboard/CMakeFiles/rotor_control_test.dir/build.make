# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cheng/fault_tolerant_control/src/offboard

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cheng/fault_tolerant_control/build/offboard

# Include any dependencies generated for this target.
include CMakeFiles/rotor_control_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rotor_control_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rotor_control_test.dir/flags.make

CMakeFiles/rotor_control_test.dir/src/rotor_control_test.cpp.o: CMakeFiles/rotor_control_test.dir/flags.make
CMakeFiles/rotor_control_test.dir/src/rotor_control_test.cpp.o: /home/cheng/fault_tolerant_control/src/offboard/src/rotor_control_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cheng/fault_tolerant_control/build/offboard/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rotor_control_test.dir/src/rotor_control_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rotor_control_test.dir/src/rotor_control_test.cpp.o -c /home/cheng/fault_tolerant_control/src/offboard/src/rotor_control_test.cpp

CMakeFiles/rotor_control_test.dir/src/rotor_control_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rotor_control_test.dir/src/rotor_control_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cheng/fault_tolerant_control/src/offboard/src/rotor_control_test.cpp > CMakeFiles/rotor_control_test.dir/src/rotor_control_test.cpp.i

CMakeFiles/rotor_control_test.dir/src/rotor_control_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rotor_control_test.dir/src/rotor_control_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cheng/fault_tolerant_control/src/offboard/src/rotor_control_test.cpp -o CMakeFiles/rotor_control_test.dir/src/rotor_control_test.cpp.s

# Object files for target rotor_control_test
rotor_control_test_OBJECTS = \
"CMakeFiles/rotor_control_test.dir/src/rotor_control_test.cpp.o"

# External object files for target rotor_control_test
rotor_control_test_EXTERNAL_OBJECTS =

/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: CMakeFiles/rotor_control_test.dir/src/rotor_control_test.cpp.o
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: CMakeFiles/rotor_control_test.dir/build.make
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /home/cheng/fault_tolerant_control/devel/.private/mavros/lib/libmavros.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libGeographic.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/libdiagnostic_updater.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/libeigen_conversions.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/liborocos-kdl.so.1.4.0
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /home/cheng/fault_tolerant_control/devel/.private/libmavconn/lib/libmavconn.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/libclass_loader.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/libPocoFoundation.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libdl.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/libroslib.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/librospack.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/libtf2_ros.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/libactionlib.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/libmessage_filters.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/libtf2.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/libroscpp.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/librosconsole.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/librostime.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /opt/ros/melodic/lib/libcpp_common.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test: CMakeFiles/rotor_control_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cheng/fault_tolerant_control/build/offboard/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rotor_control_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rotor_control_test.dir/build: /home/cheng/fault_tolerant_control/devel/.private/offboard/lib/offboard/rotor_control_test

.PHONY : CMakeFiles/rotor_control_test.dir/build

CMakeFiles/rotor_control_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rotor_control_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rotor_control_test.dir/clean

CMakeFiles/rotor_control_test.dir/depend:
	cd /home/cheng/fault_tolerant_control/build/offboard && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cheng/fault_tolerant_control/src/offboard /home/cheng/fault_tolerant_control/src/offboard /home/cheng/fault_tolerant_control/build/offboard /home/cheng/fault_tolerant_control/build/offboard /home/cheng/fault_tolerant_control/build/offboard/CMakeFiles/rotor_control_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rotor_control_test.dir/depend

