/*
en-US: EXERCISE_08.C - Exercise 08. Bitwise Operators
- Statement: You will be given an integer n, and a threshold, k. For each number i from 1 through n, find the maximum value of the logical and, or and xor when compared against all integers through n that are greater than i. Consider a value only if the comparison returns a result less than k. Print the results of the and, or and exclusive or comparisons on separate lines, in that order.

- Example: n = 3, k = 3
- The results of the comparisons are below:
            a b   and or xor
            1 2   0   3  3
            1 3   1   3  2
            2 3   2   3  1

- For the and comparison, the maximum is 2. For the or comparison, none of the values is less than k, so the maximum is 0. For the xor comparison, the maximum value less than k is 2.

- Function Description: Complete the calculate_the_maximum function in the editor below. calculate_the_maximum has the following parameters:
    int n: the highest number to consider
    int k: the result of a comparison must be lower than this number to be considered

- Prints: Print the maximum values for the and, or and xor comparisons, each on a separate line.
- Input Format: The only line contains 2 space-separated integers, n and k.

- Constraints:
    2 <= n <= 10^3 
    2 <= k <= n
_____________________________________________________________________________________________________________________
*/

#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int and = 0, or = 0, xor = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            and = (i & j) > and && (i & j) < k ? (i & j) : and;
            or = (i | j) > or && (i | j) < k ? (i | j) : or;
            xor = (i ^ j) > xor && (i ^ j) < k ? (i ^ j) : xor;
        }
    }

    printf("%d\n%d\n%d\n", and, or, xor);
}

int main(void) {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
    return 0;
}