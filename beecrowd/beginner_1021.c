/*
Information: 
    - beecrowd | 1021 - Banknotes and Coins
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1021
Statement: Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

Input: The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

Output: Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1021
Enunciado: Leia um valor de ponto flutuante com duas casas decimais. Isso representa um valor monetário. Depois disso, calcule o menor número possível de notas e moedas nas quais o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0,50, 0,25, 0,10, 0,05 e 0,01. Imprima a mensagem “NOTAS:” seguida da lista de notas e a mensagem “MOEDAS:” seguida da lista de moedas.

Entrada: O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000,00).

Saída: Imprima a quantidade mínima de notas e moedas necessárias para alterar o valor inicial.
*/

#include <stdio.h>

int main(void) {
    double n, coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int notes[] = {100, 50, 20, 10, 5, 2}, decimal, fractional, sum = 0;

    scanf("%lf", &n);
    decimal = (n * 100) / 100;

    puts("NOTAS:");
    for(int i = 0; i < 6; i++) {
        sum += (decimal / notes[i]) * notes[i];
        printf("%d nota(s) de R$ %d.00\n", (decimal / notes[i]), notes[i]);
        decimal %= notes[i]; 
    }
    
    fractional = (n - sum) * 100;
    puts("MOEDAS:");
    for(int i = 0; i < 6; i++) {
        printf("%d moeda(s) de R$ %.2lf\n", (fractional / (int)(coins[i] * 100)), coins[i]);
        fractional %= (int)(coins[i] * 100);
    }

    return 0;
}