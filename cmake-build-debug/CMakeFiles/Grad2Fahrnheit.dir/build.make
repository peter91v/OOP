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
CMAKE_SOURCE_DIR = "D:\C program\C projects\Grad2Fahrnheit"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C program\C projects\Grad2Fahrnheit\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Grad2Fahrnheit.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Grad2Fahrnheit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Grad2Fahrnheit.dir/flags.make

CMakeFiles/Grad2Fahrnheit.dir/2.c.obj: CMakeFiles/Grad2Fahrnheit.dir/flags.make
CMakeFiles/Grad2Fahrnheit.dir/2.c.obj: ../2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C program\C projects\Grad2Fahrnheit\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Grad2Fahrnheit.dir/2.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Grad2Fahrnheit.dir\2.c.obj   -c "D:\C program\C projects\Grad2Fahrnheit\2.c"

CMakeFiles/Grad2Fahrnheit.dir/2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Grad2Fahrnheit.dir/2.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\C program\C projects\Grad2Fahrnheit\2.c" > CMakeFiles\Grad2Fahrnheit.dir\2.c.i

CMakeFiles/Grad2Fahrnheit.dir/2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Grad2Fahrnheit.dir/2.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\C program\C projects\Grad2Fahrnheit\2.c" -o CMakeFiles\Grad2Fahrnheit.dir\2.c.s

# Object files for target Grad2Fahrnheit
Grad2Fahrnheit_OBJECTS = \
"CMakeFiles/Grad2Fahrnheit.dir/2.c.obj"

# External object files for target Grad2Fahrnheit
Grad2Fahrnheit_EXTERNAL_OBJECTS =

Grad2Fahrnheit.exe: CMakeFiles/Grad2Fahrnheit.dir/2.c.obj
Grad2Fahrnheit.exe: CMakeFiles/Grad2Fahrnheit.dir/build.make
Grad2Fahrnheit.exe: CMakeFiles/Grad2Fahrnheit.dir/linklibs.rsp
Grad2Fahrnheit.exe: CMakeFiles/Grad2Fahrnheit.dir/objects1.rsp
Grad2Fahrnheit.exe: CMakeFiles/Grad2Fahrnheit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C program\C projects\Grad2Fahrnheit\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Grad2Fahrnheit.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Grad2Fahrnheit.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Grad2Fahrnheit.dir/build: Grad2Fahrnheit.exe

.PHONY : CMakeFiles/Grad2Fahrnheit.dir/build

CMakeFiles/Grad2Fahrnheit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Grad2Fahrnheit.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Grad2Fahrnheit.dir/clean

CMakeFiles/Grad2Fahrnheit.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C program\C projects\Grad2Fahrnheit" "D:\C program\C projects\Grad2Fahrnheit" "D:\C program\C projects\Grad2Fahrnheit\cmake-build-debug" "D:\C program\C projects\Grad2Fahrnheit\cmake-build-debug" "D:\C program\C projects\Grad2Fahrnheit\cmake-build-debug\CMakeFiles\Grad2Fahrnheit.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Grad2Fahrnheit.dir/depend

