WEEK 7 - C++ PROGRAMS
=====================

This package contains the C++ versions of the four Week 7 practical activities.
The memory-leak activity is provided in two files: one demonstrates the leak,
and the other shows the corrected version.

FILES
-----
1. pointer_arithmetic.cpp
   Traverses an array using ptr++ and *(ptr + i).

2. pointers_vs_references.cpp
   Demonstrates how references and pointers interact with the same variable,
   and how a pointer can be reassigned.

3. memory_leak_demo.cpp
   Intentionally demonstrates a memory leak by omitting delete.
   This is for learning only; do not copy this pattern into real programs.

4. memory_leak_fixed.cpp
   Corrects the leak by calling delete and setting the pointer to nullptr.

5. dynamic_array.cpp
   Implements a class that doubles its capacity when full, copies existing
   values, deletes the old array, and releases memory in its destructor.

COMPILE AND RUN ON LINUX
-----------------------
Example:
  g++ -std=c++17 -Wall -Wextra -pedantic pointer_arithmetic.cpp -o pointer_arithmetic
  ./pointer_arithmetic

The other files can be compiled in the same way using their respective names.
Precompiled Linux executables (.linux) are included.

WINDOWS
-------
Install MinGW-w64 and ensure g++ is available in PATH. Double-click
COMPILE_WINDOWS.bat. It creates a Windows .exe file for each .cpp file
inside the windows_exe folder.

TESTING
-------
All 5 C++ source files compiled with g++ using -std=c++17 -Wall -Wextra
-pedantic. All 5 executables ran successfully with exit code 0.
No compiler warnings or errors were reported.

NOTE
----
The .linux files are Linux executables and will not run directly on Windows.
Use COMPILE_WINDOWS.bat on Windows to generate native .exe files.
