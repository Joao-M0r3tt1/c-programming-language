/*
en-US: EXAMPLE_06.C - Example 06. guessing
- Statement: create a program that simulates a guessing game
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_06.C - Exemplo 06. Adivinhação
- Enunciado: crie um programa que simule um jogo de adivinhação
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL));
    int value, number = rand() % 7 + 1;

    do {
        printf("Number between 1 and 7? ");
        scanf("%d", &value);
        if(value < number) puts("Low");
        else if(value > number) puts("High");
    } while(value != number);
    puts("Got it right");

    return 0;
}