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
CMAKE_SOURCE_DIR = "D:\C program\C projects\SWE2\ILV01\SortANum\SortANum"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C program\C projects\SWE2\ILV01\SortANum\SortANum\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/SortANum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SortANum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SortANum.dir/flags.make

CMakeFiles/SortANum.dir/SortANum.c.obj: CMakeFiles/SortANum.dir/flags.make
CMakeFiles/SortANum.dir/SortANum.c.obj: ../SortANum.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C program\C projects\SWE2\ILV01\SortANum\SortANum\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SortANum.dir/SortANum.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SortANum.dir\SortANum.c.obj   -c "D:\C program\C projects\SWE2\ILV01\SortANum\SortANum\SortANum.c"

CMakeFiles/SortANum.dir/SortANum.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SortANum.dir/SortANum.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\C program\C projects\SWE2\ILV01\SortANum\SortANum\SortANum.c" > CMakeFiles\SortANum.dir\SortANum.c.i

CMakeFiles/SortANum.dir/SortANum.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SortANum.dir/SortANum.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\C program\C projects\SWE2\ILV01\SortANum\SortANum\SortANum.c" -o CMakeFiles\SortANum.dir\SortANum.c.s

# Object files for target SortANum
SortANum_OBJECTS = \
"CMakeFiles/SortANum.dir/SortANum.c.obj"

# External object files for target SortANum
SortANum_EXTERNAL_OBJECTS =

SortANum.exe: CMakeFiles/SortANum.dir/SortANum.c.obj
SortANum.exe: CMakeFiles/SortANum.dir/build.make
SortANum.exe: CMakeFiles/SortANum.dir/linklibs.rsp
SortANum.exe: CMakeFiles/SortANum.dir/objects1.rsp
SortANum.exe: CMakeFiles/SortANum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C program\C projects\SWE2\ILV01\SortANum\SortANum\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable SortANum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SortANum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SortANum.dir/build: SortANum.exe

.PHONY : CMakeFiles/SortANum.dir/build

CMakeFiles/SortANum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SortANum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SortANum.dir/clean

CMakeFiles/SortANum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C program\C projects\SWE2\ILV01\SortANum\SortANum" "D:\C program\C projects\SWE2\ILV01\SortANum\SortANum" "D:\C program\C projects\SWE2\ILV01\SortANum\SortANum\cmake-build-debug" "D:\C program\C projects\SWE2\ILV01\SortANum\SortANum\cmake-build-debug" "D:\C program\C projects\SWE2\ILV01\SortANum\SortANum\cmake-build-debug\CMakeFiles\SortANum.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SortANum.dir/depend

