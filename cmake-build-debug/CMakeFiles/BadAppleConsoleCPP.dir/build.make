# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BadAppleConsoleCPP.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/BadAppleConsoleCPP.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BadAppleConsoleCPP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BadAppleConsoleCPP.dir/flags.make

CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.o: CMakeFiles/BadAppleConsoleCPP.dir/flags.make
CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.o: /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/main.cpp
CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.o: CMakeFiles/BadAppleConsoleCPP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.o -MF CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.o.d -o CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.o -c /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/main.cpp

CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/main.cpp > CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.i

CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/main.cpp -o CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.s

CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.o: CMakeFiles/BadAppleConsoleCPP.dir/flags.make
CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.o: /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/lib/src/AudioPlayer.cpp
CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.o: CMakeFiles/BadAppleConsoleCPP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.o -MF CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.o.d -o CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.o -c /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/lib/src/AudioPlayer.cpp

CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/lib/src/AudioPlayer.cpp > CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.i

CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/lib/src/AudioPlayer.cpp -o CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.s

CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.o: CMakeFiles/BadAppleConsoleCPP.dir/flags.make
CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.o: /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/lib/src/VideoProcessor.cpp
CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.o: CMakeFiles/BadAppleConsoleCPP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.o -MF CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.o.d -o CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.o -c /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/lib/src/VideoProcessor.cpp

CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/lib/src/VideoProcessor.cpp > CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.i

CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/lib/src/VideoProcessor.cpp -o CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.s

# Object files for target BadAppleConsoleCPP
BadAppleConsoleCPP_OBJECTS = \
"CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.o" \
"CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.o" \
"CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.o"

# External object files for target BadAppleConsoleCPP
BadAppleConsoleCPP_EXTERNAL_OBJECTS =

BadAppleConsoleCPP: CMakeFiles/BadAppleConsoleCPP.dir/main.cpp.o
BadAppleConsoleCPP: CMakeFiles/BadAppleConsoleCPP.dir/lib/src/AudioPlayer.cpp.o
BadAppleConsoleCPP: CMakeFiles/BadAppleConsoleCPP.dir/lib/src/VideoProcessor.cpp.o
BadAppleConsoleCPP: CMakeFiles/BadAppleConsoleCPP.dir/build.make
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_gapi.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_stitching.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_alphamat.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_aruco.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_bgsegm.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_bioinspired.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_ccalib.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_dnn_objdetect.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_dnn_superres.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_dpm.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_face.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_freetype.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_fuzzy.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_hfs.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_img_hash.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_intensity_transform.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_line_descriptor.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_mcc.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_quality.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_rapid.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_reg.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_rgbd.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_saliency.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_sfm.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_stereo.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_structured_light.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_superres.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_surface_matching.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_tracking.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_videostab.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_viz.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_wechat_qrcode.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_xfeatures2d.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_xobjdetect.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_xphoto.4.8.1.dylib
BadAppleConsoleCPP: /Library/Developer/CommandLineTools/SDKs/MacOSX14.0.sdk/usr/lib/libcurses.tbd
BadAppleConsoleCPP: /Library/Developer/CommandLineTools/SDKs/MacOSX14.0.sdk/usr/lib/libform.tbd
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_shape.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_highgui.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_datasets.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_plot.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_text.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_ml.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_phase_unwrapping.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_optflow.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_ximgproc.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_video.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_videoio.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_imgcodecs.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_objdetect.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_calib3d.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_dnn.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_features2d.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_flann.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_photo.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_imgproc.4.8.1.dylib
BadAppleConsoleCPP: /opt/homebrew/lib/libopencv_core.4.8.1.dylib
BadAppleConsoleCPP: CMakeFiles/BadAppleConsoleCPP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable BadAppleConsoleCPP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BadAppleConsoleCPP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BadAppleConsoleCPP.dir/build: BadAppleConsoleCPP
.PHONY : CMakeFiles/BadAppleConsoleCPP.dir/build

CMakeFiles/BadAppleConsoleCPP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BadAppleConsoleCPP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BadAppleConsoleCPP.dir/clean

CMakeFiles/BadAppleConsoleCPP.dir/depend:
	cd /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/cmake-build-debug /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/cmake-build-debug /Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/cmake-build-debug/CMakeFiles/BadAppleConsoleCPP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BadAppleConsoleCPP.dir/depend
