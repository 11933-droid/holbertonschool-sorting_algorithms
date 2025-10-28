# C - Sorting Algorithms & Big O

## Description
Implementations of Bubble Sort (array) and Insertion Sort (doubly linked list) with required print after each swap, plus Big O files.

## Requirements
- Ubuntu 20.04
- GCC flags: -Wall -Werror -Wextra -pedantic -std=gnu89
- Betty style
- No global variables
- ≤ 5 functions per file

## Files
- sort.h
- 0-bubble_sort.c
- 0-O
- 1-insertion_sort_list.c
- 1-O

## Compile (local tests)
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-bubble_sort.c print_array.c -o bubble
./bubble
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
./insertion
