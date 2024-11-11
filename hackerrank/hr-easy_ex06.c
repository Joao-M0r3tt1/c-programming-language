/*
en-US: EXERCISE_06.C - Exercise 06. For Loop in C
- Statement: For each integer n in the interval [a,b] (given as input):
    - If 1 <= n <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
    - Else if n > 9 and it is an even number, then print "even".
    - Else if n > 9 and it is an odd number, then print "odd".

- Input Format: The first line contains an integer, a. The seond line contains an integer, b.
- Constraints: 1 <= a <= b <= 10^6
- Output Format: Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.

- Note: [a,b] = {x ∈ Z | a <= x <= b} = {a, a+1, ..., b} 
_____________________________________________________________________________________________________________________
*/

#include <stdio.h>

int main(void) {
    int a, b;
    char *number[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d\n%d", &a, &b);

    for(int i = a; i <= b; i++) {
        if(1 <= i <= 9)
            printf("%s\n", number[i - 1]);
        else if(i > 9 && i%2 != 0)
            printf("odd\n");
        else 
            printf("even\n");
    }
    
    return 0;
}