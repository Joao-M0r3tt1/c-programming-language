/*
Information: 
    - beecrowd | 1020 - Age in Days
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1020
Statement: Read an integer value corresponding to a person's age in days and enter it in years, months and days
Note: just to make the calculation easier, consider every year with 365 days and every month with 30 days. In the test cases there will never be a situation that allows 12 months and a few days, such as 360, 363 or 364. This is just an exercise aimed at testing simple mathematical reasoning.

Input: The input file contains an integer value.

Output: Print the output as per the example provided.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1020
Enunciado: Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias
Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

Entrada: O arquivo de entrada contém um valor inteiro.

Saída: Imprima a saída conforme exemplo fornecido.
__________________________________________________________________________________________________________________________________________________

Input Examples             Output Examples
    400                         1 ano(s)
                                1 mes(es)
                                5 dia(s)
__________________________________________________
    800                         2 ano(s)
                                2 mes(es)
                                10 dia(s)
__________________________________________________
    30                          0 ano(s)
                                1 mes(es)
                                0 dia(s)
*/

#include <stdio.h>

int main(void) {
    int age, year, month, day;

    scanf("%d", &age);

    year = age / 365;
    printf("%d ano(s)\n", year);
    age %= 365;
    month = age / 30;
    printf("%d mes(es)\n", month);
    age %= 30;
    day = age / 1;
    printf("%d dia(s)\n", day);
    age %= 1;

    return 0;
}