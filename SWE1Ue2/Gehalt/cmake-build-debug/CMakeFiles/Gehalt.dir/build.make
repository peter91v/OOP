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
CMAKE_SOURCE_DIR = "D:\C program\C projects\Gehalt"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C program\C projects\Gehalt\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Gehalt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Gehalt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Gehalt.dir/flags.make

CMakeFiles/Gehalt.dir/main.c.obj: CMakeFiles/Gehalt.dir/flags.make
CMakeFiles/Gehalt.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C program\C projects\Gehalt\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Gehalt.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Gehalt.dir\main.c.obj   -c "D:\C program\C projects\Gehalt\main.c"

CMakeFiles/Gehalt.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Gehalt.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\C program\C projects\Gehalt\main.c" > CMakeFiles\Gehalt.dir\main.c.i

CMakeFiles/Gehalt.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Gehalt.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\C program\C projects\Gehalt\main.c" -o CMakeFiles\Gehalt.dir\main.c.s

# Object files for target Gehalt
Gehalt_OBJECTS = \
"CMakeFiles/Gehalt.dir/main.c.obj"

# External object files for target Gehalt
Gehalt_EXTERNAL_OBJECTS =

Gehalt.exe: CMakeFiles/Gehalt.dir/main.c.obj
Gehalt.exe: CMakeFiles/Gehalt.dir/build.make
Gehalt.exe: CMakeFiles/Gehalt.dir/linklibs.rsp
Gehalt.exe: CMakeFiles/Gehalt.dir/objects1.rsp
Gehalt.exe: CMakeFiles/Gehalt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C program\C projects\Gehalt\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Gehalt.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Gehalt.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Gehalt.dir/build: Gehalt.exe

.PHONY : CMakeFiles/Gehalt.dir/build

CMakeFiles/Gehalt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Gehalt.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Gehalt.dir/clean

CMakeFiles/Gehalt.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C program\C projects\Gehalt" "D:\C program\C projects\Gehalt" "D:\C program\C projects\Gehalt\cmake-build-debug" "D:\C program\C projects\Gehalt\cmake-build-debug" "D:\C program\C projects\Gehalt\cmake-build-debug\CMakeFiles\Gehalt.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Gehalt.dir/depend

