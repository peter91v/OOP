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
CMAKE_SOURCE_DIR = "D:\C program\C projects\BMICalc"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C program\C projects\BMICalc\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/BMI.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BMI.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BMI.dir/flags.make

CMakeFiles/BMI.dir/main.c.obj: CMakeFiles/BMI.dir/flags.make
CMakeFiles/BMI.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C program\C projects\BMICalc\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BMI.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\BMI.dir\main.c.obj   -c "D:\C program\C projects\BMICalc\main.c"

CMakeFiles/BMI.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BMI.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\C program\C projects\BMICalc\main.c" > CMakeFiles\BMI.dir\main.c.i

CMakeFiles/BMI.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BMI.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\C program\C projects\BMICalc\main.c" -o CMakeFiles\BMI.dir\main.c.s

# Object files for target BMI
BMI_OBJECTS = \
"CMakeFiles/BMI.dir/main.c.obj"

# External object files for target BMI
BMI_EXTERNAL_OBJECTS =

BMI.exe: CMakeFiles/BMI.dir/main.c.obj
BMI.exe: CMakeFiles/BMI.dir/build.make
BMI.exe: CMakeFiles/BMI.dir/linklibs.rsp
BMI.exe: CMakeFiles/BMI.dir/objects1.rsp
BMI.exe: CMakeFiles/BMI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C program\C projects\BMICalc\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BMI.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BMI.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BMI.dir/build: BMI.exe

.PHONY : CMakeFiles/BMI.dir/build

CMakeFiles/BMI.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BMI.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BMI.dir/clean

CMakeFiles/BMI.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C program\C projects\BMICalc" "D:\C program\C projects\BMICalc" "D:\C program\C projects\BMICalc\cmake-build-debug" "D:\C program\C projects\BMICalc\cmake-build-debug" "D:\C program\C projects\BMICalc\cmake-build-debug\CMakeFiles\BMI.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/BMI.dir/depend

