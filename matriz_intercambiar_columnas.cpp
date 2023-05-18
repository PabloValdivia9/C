#include <stdio.h>

int main() {
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int m, n;
    printf("Ingresa el numero de la columna m (0-4): ");
    scanf("%d", &m);
    printf("Ingresa el numero de la columna n (0-4): ");
    scanf("%d", &n);

    int matrizIntercambiada[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matrizIntercambiada[i][j] = matriz[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        int temp = matrizIntercambiada[i][m];
        matrizIntercambiada[i][m] = matrizIntercambiada[i][n];
        matrizIntercambiada[i][n] = temp;
    }

    printf("\nMatriz original:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz con columnas intercambiadas:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", matrizIntercambiada[i][j]);
        }
        printf("\n");
    }

    return 0;
}
