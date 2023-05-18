#include <stdio.h>

int main() {
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    printf("Matriz original:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz modificada:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < j) {
                // Elemento encima de la diagonal principal
                if (matriz[i][j] % 2 == 0) {
                    // Par, se incrementa para que sea impar
                    matriz[i][j]++;
                }
            } else if (i == j) {
                // Diagonal principal
                if (matriz[i][j] % 2 != 0) {
                    // Impar, se incrementa para que sea par
                    matriz[i][j]++;
                }
            } else {
                // Elemento debajo de la diagonal principal
                if (matriz[i][j] % 2 != 0) {
                    // Impar, se incrementa para que sea par
                    matriz[i][j]++;
                }
            }
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
