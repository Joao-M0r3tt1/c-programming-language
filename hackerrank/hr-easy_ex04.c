/*
en-US: EXERCISE_04.C - Exercise 04. Pointers in C
- Statement: Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of  to their sum, and  to their absolute difference. There is no return value, and no return statement is needed.
    - a' = a + b
    - b' = |a - b|

- Input Format: The input will contain two integers,  and , separated by a newline.
- Output Format: Modify the two values in place and the code stub main() will print their values.

- Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'statement' section.
_____________________________________________________________________________________________________________________
*/

#include <stdio.h>

void update(int *pointer_a, int *pointer_b) {
    int value = *pointer_a;

    *pointer_a += *pointer_b;
    *pointer_b = value > *pointer_b ? value - *pointer_b : *pointer_b - value;
}

int main(void) {
    int a, b;

    scanf("%d\n%d", &a, &b);
    update(&a, &b);
    printf("%d\n%d\n", a, b);

    return 0;
}