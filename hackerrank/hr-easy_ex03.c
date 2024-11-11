/*
en-US: EXERCISE_03.C - Exercise 03. Function in C
- Statement: Write a function `int max_of_four(int a, int b, int c, int d)` which reads four arguments and returns the greatest of them.

- Note: There is not built in `max` function in C. Code that will be reused is often put in a separate function, e.g. `int max(x, y)` that returns the greater of the two values.

- Input Format: Input will contain four integers `a,b,c,d`, one on each line.
- Output Format: Print the greatest of the four integers. Note: I/O will be automatically handled.
_____________________________________________________________________________________________________________________
*/

#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {    
    return ((a > b ? a : b) > c ? (a > b ? a : b): c) > d ? ((a > b ? a : b) > c ? (a > b ? a : b): c) : d;
}

int main(void) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", max_of_four(a, b, c, d));
    
    return 0;
}