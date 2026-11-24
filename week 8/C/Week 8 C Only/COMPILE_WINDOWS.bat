@echo off
setlocal
gcc -std=c11 -Wall -Wextra -Wpedantic encapsulation.c -o encapsulation.exe || exit /b 1
gcc -std=c11 -Wall -Wextra -Wpedantic stack_vs_heap.c -o stack_vs_heap.exe || exit /b 1
gcc -std=c11 -Wall -Wextra -Wpedantic evaluate_design.c -o evaluate_design.exe || exit /b 1
gcc -std=c11 -Wall -Wextra -Wpedantic bank_account.c -o bank_account.exe || exit /b 1
echo All Week 8 C programs compiled successfully.
pause
