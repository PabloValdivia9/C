#include <stdio.h>

void sumarArreglos(const int *a, const int *b, int *c, int size) {
    int acarreo = 0; 
    for (int i = size - 1; i >= 0; i--) {
        c[i] = a[i] + b[i] + acarreo;
        if (c[i] > 9) {
            acarreo = c[i] / 10;
            c[i] %= 10;
        } else {
            acarreo = 0;
        }
    }
}

int main() {
    int a[5];
    int b[5];
    int c[5];

    int size = sizeof(a) / sizeof(a[0]);

    printf("Ingrese los valores del arreglo a (separados por espacio): ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Ingrese los valores del arreglo b (separados por espacio): ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &b[i]);
    }

    sumarArreglos(a, b, c, size);

    printf("Arreglo c (suma de a y b): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
