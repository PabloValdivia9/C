#include <stdio.h>
#include <stdbool.h>

//Cada fila debe contener los números del 1 al 9 sin repetición.
//Cada columna debe contener los números del 1 al 9 sin repetición.
//Cada submatriz de 3x3 debe contener los números del 1 al 9 sin repetición.


int main() {
    int matriz[9][9] = {
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5},
        {3, 4, 5, 2, 8, 6, 1, 7, 9}
    };

    // Verificar filas
    for (int i = 0; i < 9; i++) {
        bool numeros[9] = {false};
        for (int j = 0; j < 9; j++) {
            int numero = matriz[i][j];
            if (numero < 1 || numero > 9 || numeros[numero - 1]) {
                printf("La matriz no es un Sudoku valido.\n");
                return 0;
            }
            numeros[numero - 1] = true;
        }
    }

    // Verificar columnas
    for (int j = 0; j < 9; j++) {
        bool numeros[9] = {false};
        for (int i = 0; i < 9; i++) {
            int numero = matriz[i][j];
            if (numero < 1 || numero > 9 || numeros[numero - 1]) {
                printf("La matriz no es un Sudoku valido.\n");
                return 0;
            }
            numeros[numero - 1] = true;
        }
    }

    // Verificar submatrices de 3x3
    for (int k = 0; k < 9; k++) {
        bool numeros[9] = {false};
        int filaInicio = (k / 3) * 3;
        int columnaInicio = (k % 3) * 3;
        for (int i = filaInicio; i < filaInicio + 3; i++) {
            for (int j = columnaInicio; j < columnaInicio + 3; j++) {
                int numero = matriz[i][j];
                if (numero < 1 || numero > 9 || numeros[numero - 1]) {
                    printf("La matriz no es un Sudoku válido.\n");
                    return 0;
                }
                numeros[numero - 1] = true;
            }
        }
    }

    printf("La matriz es un Sudoku válido.\n");
    return 0;
}
