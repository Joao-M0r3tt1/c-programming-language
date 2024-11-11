/*
en-US: EXAMPLE_04.C - Example 04. Factorial
- Statement: given a natural number, display its factorial
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_04.C - Exemplo 04. Fatorial
- Enunciado: dado um número natural, exiba o seu fatorial
*/

#include <stdio.h>

int main(void) {
    int number, factorial = 1;

    printf("Number? ");
    scanf("%d", &number);

    for(int i = 2; i <= number; i++)
        factorial *= i;
    printf("Factorial = %d\n", factorial);

    return 0;
}