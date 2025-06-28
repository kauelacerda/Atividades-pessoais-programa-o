#include <stdio.h>

int main() {
    int n, r;
    int a1, termo_atual;
    int soma = 0;
    int i;

    printf("Gerador de Progressao Aritmetica\n\n");

    printf("Digite o numero de termos (n): ");
    scanf("%d", &n);

    printf("Digite o primeiro termo (a1): ");
    scanf("%d", &a1);

    printf("Digite a razao (r): ");
    scanf("%d", &r);

    printf("\nTermos da PA:\n");
    termo_atual = a1;
    
    for (i = 1; i <= n; i++) {
        printf("%d ", termo_atual);
        soma += termo_atual;
        termo_atual += r;
    }

    printf("\n\nSoma dos %d termos: %d\n", n, soma);

    return 0;
}