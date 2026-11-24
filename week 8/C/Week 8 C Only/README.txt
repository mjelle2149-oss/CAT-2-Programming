WEEK 8 - C PROGRAMS ONLY
=======================

Based on "Week 8 Practical Session in C: Simulating Object-Oriented Programming".

ACTIVITY FILES
1. encapsulation.c       - Student struct with setter/getter functions.
2. stack_vs_heap.c       - Stack and heap allocation using malloc/free.
3. evaluate_design.c     - Compares unsafe direct balance access with a validated function.
4. bank_account.c        - Bank account struct with deposit, withdraw and balance inquiry.

COMPILED EXECUTABLES
Linux executables are included without a file extension:
- encapsulation
- stack_vs_heap
- evaluate_design
- bank_account

RUN ON LINUX
Open a terminal in this folder and run, for example:
    ./encapsulation

WINDOWS
The included COMPILE_WINDOWS.bat compiles the four .c files into Windows .exe files.
Install MinGW-w64 and ensure gcc is available in PATH before running the batch file.

NOTES
- C has no private keyword. The practical demonstrates encapsulation by convention and
  by routing changes through functions; struct members remain publicly accessible.
- The heap allocation checks whether malloc succeeded and frees the allocated memory.
- The bank account validates deposits and withdrawals, including insufficient funds.
