/*
en-US: EXAMPLE_06.C - Example 06. Bar chart
- Statement: vector implementation example
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_06.C - Exemplo 06. Gráfico de barras
- Enunciado: exemplo da implementação de vetores
*/

#include <stdio.h>

void graphic(int vector[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < vector[i]; j++)
            putchar(220);
        putchar('\n');
    }
}

int main(void) {
    int vector_A[4] = {3, 4, 2, 1};
    int vector_B[3] = {9, 4, 7};

    graphic(vector_A, 4);
    getchar();
    graphic(vector_B, 3);
    
    return 0;
}