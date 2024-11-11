/*
en-US: EXERCISE_09.C - Exercise 09. Lone element
- Statement: Let v be a vector in which every item occurs exactly twice except one of them. Using bitwise 'exclusive or', create the function lone(v, n), which tells which of the n items in the vector v has no pair
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_09.C - Exercicio 09. Elemento solitário
- Enunciado: Seja v um vetor em que todo item ocorre exatamente duas vezes, exceto um deles. Usando 'ou exclusivo' bit-a-bit, crie a função solitario(v, n), que informa qual dos n itens no vetor v não tem par
*/

#include <stdio.h>

void lone(char v[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= v[i];
    }
    printf("Item '%c' in the vector has no pair", result);
}

int main(void) {
    char v[] = {'a', '1', '!', '1', 'a'};

    lone(v, 5);

    return 0;
}

/*
Obs.: The XOR of a number with itself is always 0, and the XOR of any number with 0 is the number itself. Therefore, when XORing all the elements in the vector, the elements that occur twice will cancel each other out, leaving only the solitary element.
*/