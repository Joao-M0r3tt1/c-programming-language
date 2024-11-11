/*
Information: 
    - beecrowd | 1008 - Wage
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1008
Statement: Write a program that reads an employee's number, their number of hours worked, the amount they are paid per hour, and calculates that employee's salary. Next, show the employee's number and salary, to two decimal places.

Input: The input file contains 2 integers and 1 number with two decimal places, representing the number, number of hours worked and the amount the employee receives per hour worked, respectively.

Output: Print the employee number and salary, as per the example provided, with a blank space before and after the equality. In the case of salary, there must also be a blank space after the $.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1008
Enunciado: Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

Entrada: O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.

Saída: Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $.
__________________________________________________________________________________________________________________________________________________

Input Examples                   Output Examples
     25                          NUMBER = 25
    100                          SALARY = U$ 550.00
    5.50
__________________________________________________
     1                           NUMBER = 1
    200                          SALARY = U$ 4100.00
    20.50
__________________________________________________    
     6                           NUMBER = 6
    145                          SALARY = U$ 2254.75
    15.55
*/

#include <stdio.h>

int main(void) {
    int employeeNumber, hoursWorked;
    double hourlyWage;

    scanf("%d", &employeeNumber);
    scanf("%d", &hoursWorked);
    scanf("%lf", &hourlyWage);

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", employeeNumber, (hoursWorked * hourlyWage));

    return 0;
}