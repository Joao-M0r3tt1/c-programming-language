/*
en-US: EXAMPLE_09.C - Example 09. In-depth search
- Statement: Create the program that prompts the user for a starting point x and an ending point y, and then displays all the routes on the map that lead from x to y
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_09.C - Exemplo 09. Busca em profundidade 
- Enunciado: Crie o programa que solicita ao usuário um ponto de partida x e um ponto de chegada y e, em seguida, exiba todas as rotas no mapa que levam de x até y

Grafo | Fork
1 ------- → 3 → →
↑         ↙ ↑     ↘ 
↑       ↙   |       ↘
|     ↙     |         5
↓   ↙       |       ↗
↓ ↙         ↓     ↗ 
2 ------- → 2 ← ← 

Search Tree
        ---------------------- 1 -------------------------------                       | level 01
        ↓                                                      ↓                        
------- 2 -------                            ----------------- 3 -----------           | level 02
↓               ↓                            ↓                 ↓           ↓            
1           --- 4 ---                    --- 2 ---         --- 4 ---       5           | leval 03                                        
            ↓       ↓                    ↓       ↓         ↓       ↓
        --- 3 ---   5                    1   --- 4 ---     3       5                   | level 04 
        ↓   ↓   ↓                            ↓       ↓
        2   4   5                            3       5                                 | level 05 
*/

#include <stdio.h>

typedef struct { int origin; int destiny; } Lane;

int belongs(int x, int r[], int n) {
    for(int i = 0; i < n; i++)
        if(x == r[i]) return 1;
    return 0;
}

void display(int r[], int n) {
    for(int j = 0; j < n; j++) printf("%d,", r[j]);
    printf("\b.\n");
}

void routes(int x, int y, Lane v[], int n) {
    static int r[100], i = 0;

    r[i++] = x;
    if(x == y ) display(r, i);
    else
        for(int j = 0; j < n; j++) 
            if(v[j].origin == x && !belongs(v[j].destiny, r, i))
                routes(v[j].destiny, y, v, n);
    i--;
}

int main(void) {
    int x, y;
    Lane v[10] = {{1,2}, {1,3},
                  {2,1}, {2,4},
                  {3,2}, {3,4}, {3,5},
                  {4,3}, {4,5},
                  {5,4}};

    printf("(origin, destination) - Enter the origin and destination: ");
    scanf("%d, %d", &x, &y);

    routes(x, y, v, 10);

    return 0;
}