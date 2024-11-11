/*
en-US: EXAMPLE_08.C - Example 08. Result of a contest
Statement: Given a g.txt file, with the answer sheet for a competition test, and a c.txt file, with the registration number and answers of each candidate, generate an r.txt file, with the results of the competition
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_08.C - Exemplo 08. Resultado de um concurso
Enunciado: Dados um arquivo g.txt, com o gabarito da prova de um concurso, e um arquivo c.txt, com o número de inscrição e as respostas de cada candidato, gere um arquivo r.txt, com os resultados do concurso
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-13.pdf
*/

#include <stdio.h>
#include <stdlib.h>

int points(char *r, char *g) {
    int p = 0;

    for(int i = 0; r[i] && g[i]; i++) if(r[i] == g[i]) p++;

    return p;
}

FILE *open(char *name, char *mode, char *e) {
    FILE *p = fopen(name, mode);

    if(p == NULL) {
        puts(e);
        exit(1);
    }

    return p;
}

int main(void) {
    FILE *fileA = open("c.txt", "r", "c.txt was not opened!");
    FILE *fileB = open("g.txt", "r", "g.txt was not opened!");
    FILE *fileC = open("r.txt", "w", "r.txt was not opened!");
    char g[6], r[6];
    int n;

    fgets(g, 6, fileB);
    while(1) {
        fscanf(fileA, "%d %s", &n, r);
        if(feof(fileA)) break;
        fprintf(fileC, "%d %d\n", n, points(r, g));
    }
    fclose(fileA);
    fclose(fileB);
    fclose(fileC);

    return 0;
}


/*
- Data examples for the files: 

g.txt
abcde

c.txt
125 acbde
493 cdeaa
384 deabc
981 cadce
394 bbced

r.txt
125 3
493 0
384 0
981 1
394 2
*/