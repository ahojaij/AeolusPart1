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
include CMakeFiles/savepixels.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/savepixels.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/savepixels.dir/flags.make

CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o: CMakeFiles/savepixels.dir/flags.make
CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o: SAVE_PIXELS.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/abdullah/CCPP/AeolusRobotics/Part1/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o -c /home/abdullah/CCPP/AeolusRobotics/Part1/SAVE_PIXELS.cpp

CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/abdullah/CCPP/AeolusRobotics/Part1/SAVE_PIXELS.cpp > CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.i

CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/abdullah/CCPP/AeolusRobotics/Part1/SAVE_PIXELS.cpp -o CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.s

CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o.requires:
.PHONY : CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o.requires

CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o.provides: CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o.requires
	$(MAKE) -f CMakeFiles/savepixels.dir/build.make CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o.provides.build
.PHONY : CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o.provides

CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o.provides.build: CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o

# Object files for target savepixels
savepixels_OBJECTS = \
"CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o"

# External object files for target savepixels
savepixels_EXTERNAL_OBJECTS =

savepixels: CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o
savepixels: CMakeFiles/savepixels.dir/build.make
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
savepixels: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
savepixels: CMakeFiles/savepixels.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable savepixels"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/savepixels.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/savepixels.dir/build: savepixels
.PHONY : CMakeFiles/savepixels.dir/build

CMakeFiles/savepixels.dir/requires: CMakeFiles/savepixels.dir/SAVE_PIXELS.cpp.o.requires
.PHONY : CMakeFiles/savepixels.dir/requires

CMakeFiles/savepixels.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/savepixels.dir/cmake_clean.cmake
.PHONY : CMakeFiles/savepixels.dir/clean

CMakeFiles/savepixels.dir/depend:
	cd /home/abdullah/CCPP/AeolusRobotics/Part1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/abdullah/CCPP/AeolusRobotics/Part1 /home/abdullah/CCPP/AeolusRobotics/Part1 /home/abdullah/CCPP/AeolusRobotics/Part1 /home/abdullah/CCPP/AeolusRobotics/Part1 /home/abdullah/CCPP/AeolusRobotics/Part1/CMakeFiles/savepixels.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/savepixels.dir/depend

