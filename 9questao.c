#include <stdio.h>

int main() {
    int i, valor, maior, menor;
    
    printf("Digite 50 valores inteiros:\n");

    // Lê o primeiro valor para inicializar maior e menor
    printf("Valor 1: ");
    scanf("%d", &valor);
    maior = menor = valor;

    // Lê os outros 49 valores
    for (i = 2; i <= 50; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
        } else if (valor < menor) {
            menor = valor;
        }
    }

    printf("\nResultado:\n");
    printf("Maior valor digitado: %d\n", maior);
    printf("Menor valor digitado: %d\n", menor);

    return 0;
}
