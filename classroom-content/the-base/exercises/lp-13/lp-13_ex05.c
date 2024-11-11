/*
en-US: EXERCISE_05.C - Exercise 05. List of employees
- Statement: Create a program to display data from the employee.dat file, which is created by running the source code from the codes/exampleCodes/lp-13/lp-13_ex11 file
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_05.C - Exercicio 05. Listagem de funcionários
- Enunciado: Crie um programa para exibir os dados do arquivo employee.dat, que é criado ao executar o código fonte do arquivo codes/exampleCodes/lp-13/lp-13_ex11
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[31];
    float wage;
} Employee;

int main(void) {
    FILE *s = fopen("employee.dat", "rb");

    if(s == NULL) {
        puts("File cannot be opened!");
        exit(1);
    }

    Employee e;

    while(fread(&e, sizeof(Employee), 1, s) == 1) {
        printf("Name: %s\n", e.name);
        printf("Salary %.2f\n", e.wage);

    }
    fclose(s);

    return 0;
}