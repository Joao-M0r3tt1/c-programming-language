/*
en-US: EXAMPLE_03.C - Example 03. Vehicle rotation
- Statement: given the license plate of a vehicle (digits only), inform the day of the rotation
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_03.C - Exemplo 03. Rodízio de veículos
- Enunciado: dada a placa de um veículo (só dígitos), informe o dia do rodízio
*/

#include <stdio.h>

int main(void) {
    int numbering;

    printf("Vehicle license plate? ");
    scanf("%d", &numbering);

    switch(numbering % 10) {
        case 1: case 2: puts("Monday"); break;
        case 3: case 4: puts("Tuesday"); break;
        case 5: case 6: puts("Wednesday"); break;
        case 7: case 8: puts("Thursday"); break;
        default: puts("Friday");
    }

    return 0;
}