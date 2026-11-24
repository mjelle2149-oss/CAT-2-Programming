WEEK 4 – C++ PROGRAMS
====================

Programs included:
1. sum_numbers.cpp          – Sum of the first N natural numbers (for loop)
2. break_continue.cpp       – Skip multiples of 3 and stop at 15
3. validation_while.cpp     – Validate positive input using while
4. validation_dowhile.cpp   – Validate positive input using do-while
5. multiplication_table.cpp – 10 by 10 multiplication table (nested loops)

Linux executables (.linux) are included and were compiled with G++ using C++17.
Each program was run with representative sample input.

To compile on Windows:
1. Install MinGW-w64 and ensure g++ is available in PATH.
2. Double-click COMPILE_WINDOWS.bat.
3. The script creates matching .exe files in this folder.

Example manual compilation:
g++ -std=c++17 sum_numbers.cpp -o sum_numbers.exe
sum_numbers.exe

Sample checks:
- Enter N=5 in sum_numbers: result is 15.
- break_continue prints 1 2 4 5 7 8 10 11 13 14, then breaks at 15.
- Validation programs repeat when the entered integer is not positive.
- multiplication_table prints a 10 x 10 table.
