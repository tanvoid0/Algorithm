# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Github\algo\Algorithm\URI\competitive_solving

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Github\algo\Algorithm\URI\competitive_solving\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/competitive_solving.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/competitive_solving.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/competitive_solving.dir/flags.make

CMakeFiles/competitive_solving.dir/main.cpp.obj: CMakeFiles/competitive_solving.dir/flags.make
CMakeFiles/competitive_solving.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Github\algo\Algorithm\URI\competitive_solving\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/competitive_solving.dir/main.cpp.obj"
	D:\env\mingw-w64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\competitive_solving.dir\main.cpp.obj -c D:\Github\algo\Algorithm\URI\competitive_solving\main.cpp

CMakeFiles/competitive_solving.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/competitive_solving.dir/main.cpp.i"
	D:\env\mingw-w64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Github\algo\Algorithm\URI\competitive_solving\main.cpp > CMakeFiles\competitive_solving.dir\main.cpp.i

CMakeFiles/competitive_solving.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/competitive_solving.dir/main.cpp.s"
	D:\env\mingw-w64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Github\algo\Algorithm\URI\competitive_solving\main.cpp -o CMakeFiles\competitive_solving.dir\main.cpp.s

# Object files for target competitive_solving
competitive_solving_OBJECTS = \
"CMakeFiles/competitive_solving.dir/main.cpp.obj"

# External object files for target competitive_solving
competitive_solving_EXTERNAL_OBJECTS =

competitive_solving.exe: CMakeFiles/competitive_solving.dir/main.cpp.obj
competitive_solving.exe: CMakeFiles/competitive_solving.dir/build.make
competitive_solving.exe: CMakeFiles/competitive_solving.dir/linklibs.rsp
competitive_solving.exe: CMakeFiles/competitive_solving.dir/objects1.rsp
competitive_solving.exe: CMakeFiles/competitive_solving.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Github\algo\Algorithm\URI\competitive_solving\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable competitive_solving.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\competitive_solving.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/competitive_solving.dir/build: competitive_solving.exe

.PHONY : CMakeFiles/competitive_solving.dir/build

CMakeFiles/competitive_solving.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\competitive_solving.dir\cmake_clean.cmake
.PHONY : CMakeFiles/competitive_solving.dir/clean

CMakeFiles/competitive_solving.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Github\algo\Algorithm\URI\competitive_solving D:\Github\algo\Algorithm\URI\competitive_solving D:\Github\algo\Algorithm\URI\competitive_solving\cmake-build-debug D:\Github\algo\Algorithm\URI\competitive_solving\cmake-build-debug D:\Github\algo\Algorithm\URI\competitive_solving\cmake-build-debug\CMakeFiles\competitive_solving.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/competitive_solving.dir/depend
