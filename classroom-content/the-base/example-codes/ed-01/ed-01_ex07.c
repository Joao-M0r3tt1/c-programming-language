/*
en-US: EXAMPLE_07.C - Example 07. The factorial function
- Statement: create a function to calculate the factorial of a number
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_07.C - Exemplo 07. A função fatorial
- Enunciado: crie uma função para calcular o fatorial de um número 
*/

#include <stdio.h>

int factorial(int n) {
    int aux = 1;

    for(int i = 2; i <= n; i++) 
        aux *= i;
    
    return aux;
}

int main(void) {
    printf("5 factorial: %d\n", factorial(5));

    return 0;
}