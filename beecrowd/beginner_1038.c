/*
Information: 
    - beecrowd | 1038 - Snack
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1038
Statement: Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.

CODE    SPECIFICATION   PRICE
1       Hot Dog         R$ 4.00
2       X-Salad         R$ 4.50
3       X-Bacon         R$ 5.00
4       Simple Toast    R$ 2.00
5       Refrigerator    R$ 1.50

Input: The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.

Output: The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1038
Enunciado: Usando a tabela do enunciado em inglês, logo acima, escreva um programa que leia um código e a quantidade de um item. Depois imprima o valor a pagar. Este é um programa muito simples com o único intuito de praticar comandos de seleção.

Entrada: O arquivo de entrada contém dois números inteiros X e Y. X é o código do produto e Y é a quantidade deste item conforme tabela acima.

Saída: A saída deverá ser a mensagem “Total: R$” seguida do valor total a ser pago, com 2 dígitos após a vírgula.
*/

#include <stdio.h>

int main(void) {
    int code, quantity;
    double price[] = {4.00, 4.50, 5.00, 2.00, 1.50};

    scanf("%d %d", &code, &quantity);

    printf("Total: R$ %.2lf\n", (price[code - 1] * quantity));

    return 0;
}