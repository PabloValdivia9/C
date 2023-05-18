#include <stdio.h>

int main() {
    int numero, factorial = 1;
    
    printf("Ingresa un numero entero: ");
    scanf("%d", &numero);
    
    for (int i = 2; i <= numero; i++) {
        factorial *= i;
    }
    
    printf("El factorial de %d es %d.\n", numero, factorial);
    
    return 0;
}
