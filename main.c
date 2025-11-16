#include <stdio.h>

int main(void) {
    int array[5] = {1, 2, 3, 4, 5};
    int valor = 5;
    int pos = -1;

    // Percorre o array para buscar o valor
    for (int i = 0; i <= 4; ++i) {
        if (array[i] == valor) {
            pos = i; // Guarda a posição se encontrar
            break;   // Sai do loop
        }
    }

    if (pos != -1) {
        printf("Valor encontrado na posição: %d\n", pos);
    } else {
        printf("Valor não encontrado\n");
    }

    return 0;
}
