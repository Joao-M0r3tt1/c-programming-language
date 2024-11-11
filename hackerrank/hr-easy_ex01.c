/*
en-US: EXERCISE_01.C - Exercise 01. "Hello World!" in C
- Statement: This challenge requires you to print  on a single line, and then print the already provided input string to stdout.

- Example - s = "Life is beautiful"

- The required output is:
    Hello, World!
    Life is beautiful

- Function Description: `complete the main() function below.`
    The main() function has the following input: `string s: a string`

- Prints: `*two strings: * "Hello, World!" on one line and the input string on the next line.`
- Input Format: `there is one line of text, s.`
_____________________________________________________________________________________________________________________
*/

#include <stdio.h>

int main(void) {
    char s[100] = "Life is beautiful";
    scanf("%[^\n]%*c", &s);

    printf("Hello. World!\n%s\n", s);

    return 0;
}