#include <stdio.h>
#include <string.h>

void invertirCadena(char *cadena) {
    int longitud = strlen(cadena);
    int i, j;
    char temp;

    for (i = 0, j = longitud - 1 ; i < j; i++, j--) {
        temp = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = temp;
    }
}

int main() {
    char cadena[100];

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    cadena[strcspn(cadena, "\n")] = '\0';

    invertirCadena(cadena);

    printf("Cadena invertida: %s\n", cadena);

    return 0;
}
