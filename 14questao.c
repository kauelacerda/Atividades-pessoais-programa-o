#include <stdio.h>

int main() {
    double valor, soma = 0, media;
    int positivos = 0, negativos = 0, total = 0;
    char continuar = 's';

    printf("Analise de Valores Numericos\n");
    printf("Digite os valores (digite 'n' para parar):\n");

    while (continuar == 's' || continuar == 'S') {
        printf("Digite um valor: ");
        if (scanf("%lf", &valor) != 1) {
            scanf(" %c", &continuar);
            if (continuar != 'n' && continuar != 'N') {
                printf("Entrada invalida. Digite um numero ou 'n' para parar.\n");
                continue;
            }
            break;
        }

        total++;
        soma += valor;

        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        }

        printf("Deseja continuar (s/n)? ");
        scanf(" %c", &continuar);
    }
    if (total > 0) {
        media = soma / total;
        double perc_positivos = (double)positivos / total * 100;
        double perc_negativos = (double)negativos / total * 100;

        printf("\nResultados:\n");
        printf("Total de valores lidos: %d\n", total);
        printf("Media aritmetica: %.2f\n", media);
        printf("Valores positivos: %d (%.2f%%)\n", positivos, perc_positivos);
        printf("Valores negativos: %d (%.2f%%)\n", negativos, perc_negativos);
    } else {
        printf("\nNenhum valor foi digitado.\n");
    }

    return 0;
}