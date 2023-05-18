#include <stdio.h>
#include <string.h>

void eliminarVocales(char *cadena) {
    int i, j = 0;
    int len = strlen(cadena);
    for (i = 0; i < len; i++) {
        if (cadena[i] != 'A' && cadena[i] != 'a') {
            cadena[j] = cadena[i];
            j++;
        }
    }
    cadena[j]= '\0';
}

int main() {
    char cadena[100];
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    cadena[strcspn(cadena, "\n")] = '\0';
    
    eliminarVocales(cadena);

    printf("Cadena sin vocales 'A' o 'a': %s\n", cadena);

    return 0;
}
