/*
en-US: EXERCISE_07.C - Exercise 07. Sum of Digits of a Five Digit Number
- Statement: Given a five digit integer, print the sum of its digits.

- Input Format: The input contains a single five digit number, n.
- Constraints: 10000 <= n <= 99999
- Output Format: Print the sum of the digits of the five digit number.
_____________________________________________________________________________________________________________________
*/

#include <stdio.h>

int sum(int number, int counter) {
    if(counter == 0) return 0; 
    return (number%10) + sum((number / 10), (counter - 1));
}

int main(void) {
    int n;

    scanf("%d", &n);
    printf("%d\n", sum(n, 5));
    
    return 0;
}