# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\C program\C projects\ilv3\10to20.c"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C program\C projects\ilv3\10to20.c\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/10to20_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/10to20_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/10to20_c.dir/flags.make

CMakeFiles/10to20_c.dir/main.c.obj: CMakeFiles/10to20_c.dir/flags.make
CMakeFiles/10to20_c.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C program\C projects\ilv3\10to20.c\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/10to20_c.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\10to20_c.dir\main.c.obj   -c "D:\C program\C projects\ilv3\10to20.c\main.c"

CMakeFiles/10to20_c.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/10to20_c.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\C program\C projects\ilv3\10to20.c\main.c" > CMakeFiles\10to20_c.dir\main.c.i

CMakeFiles/10to20_c.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/10to20_c.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\C program\C projects\ilv3\10to20.c\main.c" -o CMakeFiles\10to20_c.dir\main.c.s

# Object files for target 10to20_c
10to20_c_OBJECTS = \
"CMakeFiles/10to20_c.dir/main.c.obj"

# External object files for target 10to20_c
10to20_c_EXTERNAL_OBJECTS =

10to20_c.exe: CMakeFiles/10to20_c.dir/main.c.obj
10to20_c.exe: CMakeFiles/10to20_c.dir/build.make
10to20_c.exe: CMakeFiles/10to20_c.dir/linklibs.rsp
10to20_c.exe: CMakeFiles/10to20_c.dir/objects1.rsp
10to20_c.exe: CMakeFiles/10to20_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C program\C projects\ilv3\10to20.c\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 10to20_c.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\10to20_c.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/10to20_c.dir/build: 10to20_c.exe

.PHONY : CMakeFiles/10to20_c.dir/build

CMakeFiles/10to20_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\10to20_c.dir\cmake_clean.cmake
.PHONY : CMakeFiles/10to20_c.dir/clean

CMakeFiles/10to20_c.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C program\C projects\ilv3\10to20.c" "D:\C program\C projects\ilv3\10to20.c" "D:\C program\C projects\ilv3\10to20.c\cmake-build-debug" "D:\C program\C projects\ilv3\10to20.c\cmake-build-debug" "D:\C program\C projects\ilv3\10to20.c\cmake-build-debug\CMakeFiles\10to20_c.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/10to20_c.dir/depend

