# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /home/khalid/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/171.4694.31/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/khalid/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/171.4694.31/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/khalid/Desktop/SortArray

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/khalid/Desktop/SortArray/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SortArray.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SortArray.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SortArray.dir/flags.make

CMakeFiles/SortArray.dir/main.c.o: CMakeFiles/SortArray.dir/flags.make
CMakeFiles/SortArray.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/khalid/Desktop/SortArray/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SortArray.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SortArray.dir/main.c.o   -c /home/khalid/Desktop/SortArray/main.c

CMakeFiles/SortArray.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SortArray.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/khalid/Desktop/SortArray/main.c > CMakeFiles/SortArray.dir/main.c.i

CMakeFiles/SortArray.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SortArray.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/khalid/Desktop/SortArray/main.c -o CMakeFiles/SortArray.dir/main.c.s

CMakeFiles/SortArray.dir/main.c.o.requires:

.PHONY : CMakeFiles/SortArray.dir/main.c.o.requires

CMakeFiles/SortArray.dir/main.c.o.provides: CMakeFiles/SortArray.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/SortArray.dir/build.make CMakeFiles/SortArray.dir/main.c.o.provides.build
.PHONY : CMakeFiles/SortArray.dir/main.c.o.provides

CMakeFiles/SortArray.dir/main.c.o.provides.build: CMakeFiles/SortArray.dir/main.c.o


# Object files for target SortArray
SortArray_OBJECTS = \
"CMakeFiles/SortArray.dir/main.c.o"

# External object files for target SortArray
SortArray_EXTERNAL_OBJECTS =

SortArray: CMakeFiles/SortArray.dir/main.c.o
SortArray: CMakeFiles/SortArray.dir/build.make
SortArray: CMakeFiles/SortArray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/khalid/Desktop/SortArray/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable SortArray"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SortArray.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SortArray.dir/build: SortArray

.PHONY : CMakeFiles/SortArray.dir/build

CMakeFiles/SortArray.dir/requires: CMakeFiles/SortArray.dir/main.c.o.requires

.PHONY : CMakeFiles/SortArray.dir/requires

CMakeFiles/SortArray.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SortArray.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SortArray.dir/clean

CMakeFiles/SortArray.dir/depend:
	cd /home/khalid/Desktop/SortArray/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/khalid/Desktop/SortArray /home/khalid/Desktop/SortArray /home/khalid/Desktop/SortArray/cmake-build-debug /home/khalid/Desktop/SortArray/cmake-build-debug /home/khalid/Desktop/SortArray/cmake-build-debug/CMakeFiles/SortArray.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SortArray.dir/depend

