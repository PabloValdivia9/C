#include <stdio.h>

void moverParesImpares(int *arreglo, int size) {
    int i, j = size - 1;
    int temp;

    for (i = 0; i < j;) {
        if (arreglo[i] % 2 == 0) { 
            i++;
        } else { 
            temp = arreglo[i];
            arreglo[i] = arreglo[j];
            arreglo[j] = temp;
            j--;
        }
    }
}

int main() {
    int arreglo[10];
    int i;

    printf("Ingrese 10 valores enteros separados por espacio:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arreglo[i]);
    }

    moverParesImpares(arreglo, 10);

    printf("Arreglo con pares al inicio e impares al final:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    return 0;
}
