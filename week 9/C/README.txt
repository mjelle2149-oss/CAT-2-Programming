WEEK 9 - C PROGRAMS
=============================

Activities included:
1. Basic inheritance / simulated inheritance
2. Virtual functions / function pointers
3. Abstract classes / abstract structs
4. Polymorphic drawing

Files:
- abstract_structs.c
- inheritance.c
- polymorphic_drawing.c
- virtual_functions.c

Linux executables:
Each source file has a matching .linux executable compiled and run successfully
in the provided Linux environment.

To run a Linux executable:
  ./abstract_structs.linux

To compile manually:
  gcc -Wall -Wextra -pedantic "abstract_structs.c" -o "abstract_structs"\n  gcc -Wall -Wextra -pedantic "inheritance.c" -o "inheritance"\n  gcc -Wall -Wextra -pedantic "polymorphic_drawing.c" -o "polymorphic_drawing"\n  gcc -Wall -Wextra -pedantic "virtual_functions.c" -o "virtual_functions"\n
Windows:
1. Install MinGW-w64 and ensure its bin directory is on PATH.
2. Double-click COMPILE_WINDOWS.bat.
3. The script creates Windows .exe files for all source files.

The .linux files are Linux executables and do not run directly on Windows.
