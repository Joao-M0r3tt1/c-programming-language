/*
Information: 
    - beecrowd | 1040 - Average 3
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1040
Statement: Read four numbers (N1, N2, N3, N4), which one with 1 digit after the decimal point, corresponding to 4 scores obtained by a student. Calculate the average with weights 2, 3, 4 e 1 respectively, for these 4 scores and print the message "Media: " (Average), followed by the calculated result. If the average was 7.0 or more, print the message "Aluno aprovado." (Approved Student). If the average was less than 5.0, print the message: "Aluno reprovado." (Reproved Student). If the average was between 5.0 and 6.9, including these, the program must print the message "Aluno em exame." (In exam student).

In case of exam, read one more score. Print the message "Nota do exame: " (Exam score) followed by the typed score. Recalculate the average (sum the exam score with the previous calculated average and divide by 2) and print the message “Aluno aprovado.” (Approved student) in case of average 5.0 or more) or "Aluno reprovado." (Reproved student) in case of average 4.9 or less. For these 2 cases (approved or reproved after the exam) print the message "Media final: " (Final average) followed by the final average for this student in the last line.

Input: The input contains four floating point numbers that represent the students' grades.

Output: Print all the answers with one digit after the decimal point.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1040
Enunciado: Leia quatro números (N1, N2, N3, N4), sendo um deles com 1 dígito após a vírgula, correspondendo a 4 notas obtidas por um aluno. Calcule a média com pesos 2, 3, 4 e 1 respectivamente, para essas 4 pontuações e imprima a mensagem "Media: " (Média), seguida do resultado calculado. Se a média foi 7,0 ou mais, imprima a mensagem “Aluno aprovado”. (Aluno Aprovado). Caso a média tenha sido inferior a 5,0, imprima a mensagem: “Aluno reprovado”. (Aluno Reprovado). Se a média ficou entre 5,0 e 6,9, incluindo estes, o programa deverá imprimir a mensagem “Aluno em exame”. (Em estudante de exame).

Em caso de exame, leia mais uma pontuação. Imprima a mensagem "Nota do exame: " seguida da nota digitada. Recalcular a média (soma a nota do exame com a média calculada anteriormente e dividir por 2) e imprimir a mensagem “Aluno aprovado”. (aluno aprovado) em caso de média 5,0 ou superior) ou “Aluno reprovado”. (Aluno reprovado) em caso de média 4,9 ou inferior. Para estes 2 casos (aprovado ou reprovado após o exame) imprima a mensagem “Média final:” (Média final) seguida da média final deste aluno na última linha.

Entrada: A entrada contém quatro números de ponto flutuante que representam as notas dos alunos.

Saída: Imprima todas as respostas com um dígito após a vírgula.
*/

#include <stdio.h>

void result(double avrg, int data) {
    if(!data) {
        if(avrg >= 7.0) puts("Aluno aprovado.");
        else if(avrg < 5.0) puts("Aluno reprovado.");
        else puts("Aluno em exame.");
    } else {
        if(avrg >= 5.0) puts("Aluno aprovado.");
        else puts("Aluno reprovado.");
    }
}

int main(void) {
    double n1, n2, n3, n4, average, exameScore;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    average = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;
    printf("Media: %.1lf\n", average);

    result(average, 0);

    if(average >= 5.0 && average < 7.0) {
        scanf("%lf", &exameScore);
        printf("Nota do exame: %.1lf\n", exameScore);
        result(((average  + exameScore) / 2), 1);
        printf("Media final: %.1lf\n", ((average + exameScore) / 2));
    } 

    return 0;
}