#include <stdio.h>

int main() {
    int valores[20];
    int i, j, n;

    printf("Digite 20 valores inteiros positivos:\n");

    for (i = 0; i < 20; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        
        while (valores[i] <= 0) {
            printf("Valor invalido. Digite um numero positivo: ");
            scanf("%d", &valores[i]);
        }
    }

    for (i = 0; i < 20; i++) {
        n = valores[i];
        printf("\nTabuada do %d:\n", n);
        
        for (j = 1; j <= 10; j++) {  
            printf("%2d x %2d = %3d\n", j, n, j * n);
        }
    }

    return 0;
}