#include <stdio.h>
#include <string.h>

void eliminarRepetidos(char *cadena) {
    int len = strlen(cadena);
    int i, j;

    for (i = 0, j = 1; j < len; j++) {
        if (cadena[j] != cadena[i]) {
            i++;
            cadena[i] = cadena[j];
        }
    }

    cadena[i + 1] = '\0';
}

int main() {
    char cadena[100];

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    cadena[strcspn(cadena, "\n")] = '\0';

    eliminarRepetidos(cadena);

    printf("Cadena sin caracteres repetidos: %s\n", cadena);

    return 0;
}
