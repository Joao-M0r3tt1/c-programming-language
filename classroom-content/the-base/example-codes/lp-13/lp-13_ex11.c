/*
en-US: EXAMPLE_11.C - Example 11. Employee registration
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_11.C - Exemplo 11. Cadastro de funcionários 
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-13.pdf
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[31];
    float wage;
} Employee;

int main(void) {
    FILE *s = fopen("employee.dat", "wb");

    if(s == NULL) {
        puts("File cannot be opened!");
        exit(1);
    }

    puts("Press enter to finish!\n");
    while(1) {
        Employee e;

        printf("Name? ");
        gets(e.name);
        if(strcmp(e.name, "") == 0) break;
        printf("Salary? ");
        scanf("%f%*c", &e.wage);
        fwrite(&e , sizeof(Employee), 1, s);
    }
    fclose(s);

    return 0;
}