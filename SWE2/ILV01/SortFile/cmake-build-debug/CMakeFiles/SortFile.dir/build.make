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
CMAKE_SOURCE_DIR = "D:\C program\C projects\SWE2\ILV01\SortFile"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C program\C projects\SWE2\ILV01\SortFile\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/SortFile.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SortFile.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SortFile.dir/flags.make

CMakeFiles/SortFile.dir/SortFile.c.obj: CMakeFiles/SortFile.dir/flags.make
CMakeFiles/SortFile.dir/SortFile.c.obj: ../SortFile.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C program\C projects\SWE2\ILV01\SortFile\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SortFile.dir/SortFile.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SortFile.dir\SortFile.c.obj   -c "D:\C program\C projects\SWE2\ILV01\SortFile\SortFile.c"

CMakeFiles/SortFile.dir/SortFile.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SortFile.dir/SortFile.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\C program\C projects\SWE2\ILV01\SortFile\SortFile.c" > CMakeFiles\SortFile.dir\SortFile.c.i

CMakeFiles/SortFile.dir/SortFile.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SortFile.dir/SortFile.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\C program\C projects\SWE2\ILV01\SortFile\SortFile.c" -o CMakeFiles\SortFile.dir\SortFile.c.s

# Object files for target SortFile
SortFile_OBJECTS = \
"CMakeFiles/SortFile.dir/SortFile.c.obj"

# External object files for target SortFile
SortFile_EXTERNAL_OBJECTS =

SortFile.exe: CMakeFiles/SortFile.dir/SortFile.c.obj
SortFile.exe: CMakeFiles/SortFile.dir/build.make
SortFile.exe: CMakeFiles/SortFile.dir/linklibs.rsp
SortFile.exe: CMakeFiles/SortFile.dir/objects1.rsp
SortFile.exe: CMakeFiles/SortFile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C program\C projects\SWE2\ILV01\SortFile\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable SortFile.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SortFile.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SortFile.dir/build: SortFile.exe

.PHONY : CMakeFiles/SortFile.dir/build

CMakeFiles/SortFile.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SortFile.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SortFile.dir/clean

CMakeFiles/SortFile.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C program\C projects\SWE2\ILV01\SortFile" "D:\C program\C projects\SWE2\ILV01\SortFile" "D:\C program\C projects\SWE2\ILV01\SortFile\cmake-build-debug" "D:\C program\C projects\SWE2\ILV01\SortFile\cmake-build-debug" "D:\C program\C projects\SWE2\ILV01\SortFile\cmake-build-debug\CMakeFiles\SortFile.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SortFile.dir/depend

