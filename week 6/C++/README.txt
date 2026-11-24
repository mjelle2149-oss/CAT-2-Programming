WEEK 6 - C++ PROGRAMS (ONLY)
=============================

This package contains the five C++ source files for the four Week 6 practical
activities. Activity 3 has two separate implementations, as required by the
practical guide: one using C-strings and one using std::string.

FILES
-----
1. linear_search.cpp       - Activity 1: Linear search in an integer array
2. row_major.cpp           - Activity 2: 2D array row-major memory layout
3. cstring_version.cpp     - Activity 3A: C-string comparison version
4. stdstring_version.cpp   - Activity 3B: std::string comparison version
5. score_analyzer.cpp      - Activity 4: Student score analyzer

COMPILED EXECUTABLES
--------------------
The bin/ folder contains Linux executables compiled from the source files.
They are Linux binaries, not Windows .exe files.

RUN ON LINUX
------------
From this folder, run for example:
    ./bin/linear_search
    ./bin/row_major
    ./bin/cstring_version
    ./bin/stdstring_version
    ./bin/score_analyzer

COMPILE ON WINDOWS
------------------
1. Install MinGW-w64 and ensure g++ is available in PATH.
2. Open this folder in Windows.
3. Double-click COMPILE_WINDOWS.bat.
4. The script creates a Windows .exe beside each .cpp file.

TESTING
-------
All five programs compiled successfully using g++ with C++17 and
-Wall -Wextra -pedantic, with no compiler warnings or errors.
All five programs were run with representative sample inputs.
See TEST_RESULTS.txt for the sample runs.

NOTE
----
The source code follows the Week 6 Practical Session: Arrays and Strings.
The C-only activity conversion document was not used to create C programs,
because this package is C++ only.
