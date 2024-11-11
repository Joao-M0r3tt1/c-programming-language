/*
en-US: EXAMPLE_05.C - Example 05. sum of digits
- Statement: given a natural number, display the sum of its digits
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_05.C - Exemplo 05. Soma de dígitos
- Enunciado: dado um número natural, exiba a soma de seus dígitos
*/

#include <stdio.h>

int main(void) {
    int number, sum = 0;

    printf("Number? ");
    scanf("%d", &number);

    while(number > 0) {
        sum += number % 10;
        number /= 10;
    }
    printf("Sum of digits = %d\n", sum);

    return 0;
}