#include <stdio.h>

int main() {
    int N, i, j;
    double E = 1.0;
    long fatorial;
    do {
        printf("Digite um valor inteiro positivo: ");
        scanf("%d", &N);
    } while (N <= 0);
    for (i = 1; i <= N; i++) {
        fatorial = 1;
        for (j = 1; j <= i; j++) {
            fatorial *= j;
        }
        E += 1.0 / fatorial;
    }
    printf("O valor é: %.15lf\n", E);


    return 0;
}