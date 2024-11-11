/*
Information: 
    - beecrowd | 1018 - Ballots
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1018
Statement: Read an integer value. Next, calculate the smallest possible number of notes (banknotes) into which the value can be decomposed. The grades considered are 100, 50, 20, 10, 5, 2 and 1. Next, show the value read and the list of grades required.

Input: The input file contains an integer value N (0 < N < 1000000).

Output: Print the value read and then the minimum number of notes of each type required, as per the example provided. Do not forget to print the end of line after each line, otherwise your program will display the message: “Presentation Error”.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1018
Enunciado: Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada: O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída: Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
__________________________________________________________________________________________________________________________________________________

Input Examples             Output Examples
    576                 576
                        5 nota(s) de R$ 100,00
                        1 nota(s) de R$ 50,00
                        1 nota(s) de R$ 20,00
                        0 nota(s) de R$ 10,00
                        1 nota(s) de R$ 5,00
                        0 nota(s) de R$ 2,00
                        1 nota(s) de R$ 1,00
__________________________________________________
   11257                11257
                        112 nota(s) de R$ 100,00
                        1 nota(s) de R$ 50,00
                        0 nota(s) de R$ 20,00
                        0 nota(s) de R$ 10,00
                        1 nota(s) de R$ 5,00
                        1 nota(s) de R$ 2,00
                        0 nota(s) de R$ 1,00
*/

#include <stdio.h>

int main(void) {
    int n, ballots[] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &n);

    printf("%d\n", n);
    for(int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", (n / ballots[i]), ballots[i]);
        n %= ballots[i];
    }
    
    return 0;
}