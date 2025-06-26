#include <stdio.h>

int main() {
    int i, valor, maior, menor;
    int p = 0; // Valor de parada
    
    printf("Digite 50 valores inteiros:\n");

    printf("Valor 1: ");
    scanf("%d", &valor);
    maior = menor = valor;
    for (i = 2; i <= 50; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
        } else if (valor < menor) {
            menor = valor;
        }
    }
     while (1) { 
        printf("Digite um valor: ");
        scanf("%d", &valor);

        
        if (valor == p) {
            break;
        }

    printf("\nResultado:\n");
    printf("Maior valor digitado: %d\n", maior);
    printf("Menor valor digitado: %d\n", menor);
    }
    return 0;
}
Eu tentei fazer um código de parada mas só que eu acabei falhando e eu não estava com tempo suficiente para aperfeiçoar esse código então está aí a gente estou fazendo rápido estou fazendo como está pedindo lá por causa que está sem tempo com todas as questões
