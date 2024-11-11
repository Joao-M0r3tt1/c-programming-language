/*
en-US: EXERCISE_02.C - Exercise 02. Sum and Difference of Two Numbers
- Statement: Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

    1. Declare 4 variables: two of type int and two of type float.
    2. Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
    3. Use the + and - operator to perform the following operations:
        - Print the sum and difference of two int variable on a new line.
        - Print the sum and difference of two float variable rounded to one decimal place on a new line.

- Input Format: The first line contains two integers. The second line contains two floating point numbers.

- Constraints: 1 <= integer variables <= 10^4 | 1 <= float variables <= 10^4 

- Output Format: Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to  decimal place) separated by a space on the second line.
_____________________________________________________________________________________________________________________
*/

#include <stdio.h>

int main(void) {
    int integer_1, integer_2;
    float float_1, float_2;

    scanf("%d %d", &integer_1, &integer_2);
    scanf("%f %f", &float_1, &float_2);

    printf("%d %d\n", (integer_1 + integer_2), (integer_1 - integer_2));
    printf("%.1f %.1f\n", (float_1 + float_2), (float_1 - float_2));
    
    return 0;
}