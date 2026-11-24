WEEK 5 - C++ PROGRAMS

Activities included:
1. Pass-by-value swap demonstration (and the language-appropriate way to modify originals)
2. Global and local variable scope
3. Simple recursion and tail-recursive factorial
4. Geometry function library: circle, rectangle and triangle areas

Files:
- Four source files (.cpp)
- Four compiled Linux executables (.linux)
- COMPILE_WINDOWS.bat: creates Windows .exe files when g++ from MinGW-w64 is installed and available in PATH.

Compile and run on Linux:
  g++ -std=c++17 filename.cpp -o program
  ./program.linux

On Windows:
1. Install MinGW-w64 and ensure its bin directory is added to PATH.
2. Open this folder in File Explorer.
3. Double-click COMPILE_WINDOWS.bat.
4. The batch file creates one .exe for each source file.

Testing:
All four programs compiled with g++ and were run with representative inputs.
Factorial test: input 5 produced 120 in both recursion approaches.
Geometry tests: circle radius 5 -> 78.54; rectangle 4 x 6 -> 24.00; triangle base 10, height 5 -> 25.00.

Note: The included .linux files are Linux executables, not Windows .exe files.
