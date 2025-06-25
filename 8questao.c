#include <stdio.h>

int main() {
    int valor;
    int soma = 0; 
    int quantidade = 0;
    int p = 0; // Valor de parada
    float media;

    printf("Calculadora de Media dos alunos\n");
    printf("Digite valores positivos:\n");

    while (1) { 
        printf("Digite um valor: ");
        scanf("%d", &valor);

        
        if (valor == p) {
            break;
        }

     
        soma += valor;
        quantidade++;
    }

    
    if (valor / 2) {
        media = (float)soma / quantidade;
        printf("\nMedia calculada: %.2f\n", media);
        printf("Total de valores: %d\n", quantidade);
        printf("Soma dos valores: %d\n", soma);
    } else {
        printf("\nTem que ser para todos\n");
    }

    return 0;
}