# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = D:\IDEA\apps\CLion\ch-0\181.4203.106\bin\cmake\bin\cmake.exe

# The command to remove a file.
RM = D:\IDEA\apps\CLion\ch-0\181.4203.106\bin\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\workspace\clion_workspace\cmd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\workspace\clion_workspace\cmd\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cmd.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmd.dir/flags.make

CMakeFiles/cmd.dir/main.c.obj: CMakeFiles/cmd.dir/flags.make
CMakeFiles/cmd.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\clion_workspace\cmd\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cmd.dir/main.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\cmd.dir\main.c.obj   -c D:\workspace\clion_workspace\cmd\main.c

CMakeFiles/cmd.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmd.dir/main.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\clion_workspace\cmd\main.c > CMakeFiles\cmd.dir\main.c.i

CMakeFiles/cmd.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmd.dir/main.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\clion_workspace\cmd\main.c -o CMakeFiles\cmd.dir\main.c.s

CMakeFiles/cmd.dir/main.c.obj.requires:

.PHONY : CMakeFiles/cmd.dir/main.c.obj.requires

CMakeFiles/cmd.dir/main.c.obj.provides: CMakeFiles/cmd.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\cmd.dir\build.make CMakeFiles/cmd.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/cmd.dir/main.c.obj.provides

CMakeFiles/cmd.dir/main.c.obj.provides.build: CMakeFiles/cmd.dir/main.c.obj


CMakeFiles/cmd.dir/my_ls.c.obj: CMakeFiles/cmd.dir/flags.make
CMakeFiles/cmd.dir/my_ls.c.obj: ../my_ls.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\clion_workspace\cmd\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/cmd.dir/my_ls.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\cmd.dir\my_ls.c.obj   -c D:\workspace\clion_workspace\cmd\my_ls.c

CMakeFiles/cmd.dir/my_ls.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmd.dir/my_ls.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\clion_workspace\cmd\my_ls.c > CMakeFiles\cmd.dir\my_ls.c.i

CMakeFiles/cmd.dir/my_ls.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmd.dir/my_ls.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\clion_workspace\cmd\my_ls.c -o CMakeFiles\cmd.dir\my_ls.c.s

CMakeFiles/cmd.dir/my_ls.c.obj.requires:

.PHONY : CMakeFiles/cmd.dir/my_ls.c.obj.requires

CMakeFiles/cmd.dir/my_ls.c.obj.provides: CMakeFiles/cmd.dir/my_ls.c.obj.requires
	$(MAKE) -f CMakeFiles\cmd.dir\build.make CMakeFiles/cmd.dir/my_ls.c.obj.provides.build
.PHONY : CMakeFiles/cmd.dir/my_ls.c.obj.provides

CMakeFiles/cmd.dir/my_ls.c.obj.provides.build: CMakeFiles/cmd.dir/my_ls.c.obj


CMakeFiles/cmd.dir/my_wc.c.obj: CMakeFiles/cmd.dir/flags.make
CMakeFiles/cmd.dir/my_wc.c.obj: ../my_wc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\clion_workspace\cmd\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/cmd.dir/my_wc.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\cmd.dir\my_wc.c.obj   -c D:\workspace\clion_workspace\cmd\my_wc.c

CMakeFiles/cmd.dir/my_wc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmd.dir/my_wc.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\clion_workspace\cmd\my_wc.c > CMakeFiles\cmd.dir\my_wc.c.i

CMakeFiles/cmd.dir/my_wc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmd.dir/my_wc.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\clion_workspace\cmd\my_wc.c -o CMakeFiles\cmd.dir\my_wc.c.s

CMakeFiles/cmd.dir/my_wc.c.obj.requires:

.PHONY : CMakeFiles/cmd.dir/my_wc.c.obj.requires

CMakeFiles/cmd.dir/my_wc.c.obj.provides: CMakeFiles/cmd.dir/my_wc.c.obj.requires
	$(MAKE) -f CMakeFiles\cmd.dir\build.make CMakeFiles/cmd.dir/my_wc.c.obj.provides.build
.PHONY : CMakeFiles/cmd.dir/my_wc.c.obj.provides

CMakeFiles/cmd.dir/my_wc.c.obj.provides.build: CMakeFiles/cmd.dir/my_wc.c.obj


CMakeFiles/cmd.dir/common.c.obj: CMakeFiles/cmd.dir/flags.make
CMakeFiles/cmd.dir/common.c.obj: ../common.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\clion_workspace\cmd\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/cmd.dir/common.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\cmd.dir\common.c.obj   -c D:\workspace\clion_workspace\cmd\common.c

CMakeFiles/cmd.dir/common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmd.dir/common.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\clion_workspace\cmd\common.c > CMakeFiles\cmd.dir\common.c.i

CMakeFiles/cmd.dir/common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmd.dir/common.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\clion_workspace\cmd\common.c -o CMakeFiles\cmd.dir\common.c.s

CMakeFiles/cmd.dir/common.c.obj.requires:

.PHONY : CMakeFiles/cmd.dir/common.c.obj.requires

CMakeFiles/cmd.dir/common.c.obj.provides: CMakeFiles/cmd.dir/common.c.obj.requires
	$(MAKE) -f CMakeFiles\cmd.dir\build.make CMakeFiles/cmd.dir/common.c.obj.provides.build
.PHONY : CMakeFiles/cmd.dir/common.c.obj.provides

CMakeFiles/cmd.dir/common.c.obj.provides.build: CMakeFiles/cmd.dir/common.c.obj


# Object files for target cmd
cmd_OBJECTS = \
"CMakeFiles/cmd.dir/main.c.obj" \
"CMakeFiles/cmd.dir/my_ls.c.obj" \
"CMakeFiles/cmd.dir/my_wc.c.obj" \
"CMakeFiles/cmd.dir/common.c.obj"

# External object files for target cmd
cmd_EXTERNAL_OBJECTS =

cmd.exe: CMakeFiles/cmd.dir/main.c.obj
cmd.exe: CMakeFiles/cmd.dir/my_ls.c.obj
cmd.exe: CMakeFiles/cmd.dir/my_wc.c.obj
cmd.exe: CMakeFiles/cmd.dir/common.c.obj
cmd.exe: CMakeFiles/cmd.dir/build.make
cmd.exe: CMakeFiles/cmd.dir/linklibs.rsp
cmd.exe: CMakeFiles/cmd.dir/objects1.rsp
cmd.exe: CMakeFiles/cmd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\workspace\clion_workspace\cmd\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable cmd.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cmd.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmd.dir/build: cmd.exe

.PHONY : CMakeFiles/cmd.dir/build

CMakeFiles/cmd.dir/requires: CMakeFiles/cmd.dir/main.c.obj.requires
CMakeFiles/cmd.dir/requires: CMakeFiles/cmd.dir/my_ls.c.obj.requires
CMakeFiles/cmd.dir/requires: CMakeFiles/cmd.dir/my_wc.c.obj.requires
CMakeFiles/cmd.dir/requires: CMakeFiles/cmd.dir/common.c.obj.requires

.PHONY : CMakeFiles/cmd.dir/requires

CMakeFiles/cmd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cmd.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cmd.dir/clean

CMakeFiles/cmd.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\workspace\clion_workspace\cmd D:\workspace\clion_workspace\cmd D:\workspace\clion_workspace\cmd\cmake-build-debug D:\workspace\clion_workspace\cmd\cmake-build-debug D:\workspace\clion_workspace\cmd\cmake-build-debug\CMakeFiles\cmd.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cmd.dir/depend
