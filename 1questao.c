#include <stdio.h>

int main() {
    int i, valor, negativos = 0;

    printf("negativos (5 valores)\n");

    for (i = 1; i <= 5; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &valor);
        
        if (valor < 0) {
            negativos++;
        }
    }
    printf("valores negativos: %d\n", negativos);

    return 0;
}