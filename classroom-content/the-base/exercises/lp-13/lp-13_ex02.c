/*
en-US: EXERCISE_02.C - Exercise 02. Average and situation of students
- Statement: Run the following program so that the input is read from the grades.txt file and the output is written to the result.txt file
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_02.C - Exercicio 02. Média e situação dos alunos
- Enunciado: Execute o programa a seguir, de modo que a entrada seja lida do arquivo grades.txt e a saída seja escrita no arquivo result.txt
*/

#include <stdio.h>

int main(void) {
    float grade1, grade2;

    while((scanf("%f %f", &grade1, &grade2)) != EOF) {
        float average = (grade1 + grade2) / 2;
        printf("%.1f - %s\n", average, average >= 6 ? "Approved" : "Disapproved");
    } 
    
    return 0;
}

/*
c:\>./lp-13_ex02 < grades.txt > result.txt ↲
*/

/*
- Data examples for the grades.txt file: 
5.5 6.5
7.0 9.0
3.0 7.0
5.0 8.5
7.0 2.0
*/