/*
Information: 
    - beecrowd | 1009 - Salary with Bonus
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1009
Statement: Write a program that reads the name of a salesperson, his fixed salary and the total sales made by him in the month (in cash). Knowing that this seller earns a 15% commission on sales made, inform the total to be received at the end of the month, with two decimal places.

Input: The input file contains a text (seller's first name) and 2 double precision values with two decimal places, representing the salesperson's fixed salary and the total amount of sales made by this salesperson, respectively.

Output: Print the total that the employee should receive, as per the example provided.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1009
Enunciado: Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.

Entrada: O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (double) com duas casas decimais, representando o salário fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.

Saída: Imprima o total que o funcionário deverá receber, conforme exemplo fornecido.
__________________________________________________________________________________________________________________________________________________

Input Examples                   Output Examples
    JOAO
    500.00                       TOTAL = R$ 684.54
    1230.30
__________________________________________________
    PEDRO
    700.00                       TOTAL = R$ 700.00
    0.00
__________________________________________________    
    MANGOJATA
    1700.00                     TOTAL = R$ 1884.58
    1230.50
*/

#include <stdio.h>

int main(void) {
    char name[15];
    double wage, salesAmount;

    scanf("%s", &name);
    scanf("%lf", &wage);
    scanf("%lf", &salesAmount);

    printf("TOTAL = R$ %.2lf\n", (wage + (salesAmount * 0.15)));

    return 0;
}