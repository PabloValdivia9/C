#include <stdio.h>

int main() {
    int n = 10;
    int t1 = 1, t2 = 1, siguiente;

    printf("Serie de Fibonacci hasta el termino %d:\n", n);
    printf("%d %d ", t1, t2);

    for (int i = 3; i <= n; i++) {
        siguiente = t1 + t2;
        printf("%d ", siguiente);
        t1 = t2;
        t2 = siguiente;
    }

    return 0;
}
