# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/abdullah/CCPP/AeolusRobotics/Part1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/abdullah/CCPP/AeolusRobotics/Part1

# Include any dependencies generated for this target.
include CMakeFiles/region.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/region.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/region.dir/flags.make

CMakeFiles/region.dir/FIND_REGION.cpp.o: CMakeFiles/region.dir/flags.make
CMakeFiles/region.dir/FIND_REGION.cpp.o: FIND_REGION.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/abdullah/CCPP/AeolusRobotics/Part1/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/region.dir/FIND_REGION.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/region.dir/FIND_REGION.cpp.o -c /home/abdullah/CCPP/AeolusRobotics/Part1/FIND_REGION.cpp

CMakeFiles/region.dir/FIND_REGION.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/region.dir/FIND_REGION.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/abdullah/CCPP/AeolusRobotics/Part1/FIND_REGION.cpp > CMakeFiles/region.dir/FIND_REGION.cpp.i

CMakeFiles/region.dir/FIND_REGION.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/region.dir/FIND_REGION.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/abdullah/CCPP/AeolusRobotics/Part1/FIND_REGION.cpp -o CMakeFiles/region.dir/FIND_REGION.cpp.s

CMakeFiles/region.dir/FIND_REGION.cpp.o.requires:
.PHONY : CMakeFiles/region.dir/FIND_REGION.cpp.o.requires

CMakeFiles/region.dir/FIND_REGION.cpp.o.provides: CMakeFiles/region.dir/FIND_REGION.cpp.o.requires
	$(MAKE) -f CMakeFiles/region.dir/build.make CMakeFiles/region.dir/FIND_REGION.cpp.o.provides.build
.PHONY : CMakeFiles/region.dir/FIND_REGION.cpp.o.provides

CMakeFiles/region.dir/FIND_REGION.cpp.o.provides.build: CMakeFiles/region.dir/FIND_REGION.cpp.o

# Object files for target region
region_OBJECTS = \
"CMakeFiles/region.dir/FIND_REGION.cpp.o"

# External object files for target region
region_EXTERNAL_OBJECTS =

region: CMakeFiles/region.dir/FIND_REGION.cpp.o
region: CMakeFiles/region.dir/build.make
region: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
region: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
region: CMakeFiles/region.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable region"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/region.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/region.dir/build: region
.PHONY : CMakeFiles/region.dir/build

CMakeFiles/region.dir/requires: CMakeFiles/region.dir/FIND_REGION.cpp.o.requires
.PHONY : CMakeFiles/region.dir/requires

CMakeFiles/region.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/region.dir/cmake_clean.cmake
.PHONY : CMakeFiles/region.dir/clean

CMakeFiles/region.dir/depend:
	cd /home/abdullah/CCPP/AeolusRobotics/Part1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/abdullah/CCPP/AeolusRobotics/Part1 /home/abdullah/CCPP/AeolusRobotics/Part1 /home/abdullah/CCPP/AeolusRobotics/Part1 /home/abdullah/CCPP/AeolusRobotics/Part1 /home/abdullah/CCPP/AeolusRobotics/Part1/CMakeFiles/region.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/region.dir/depend
