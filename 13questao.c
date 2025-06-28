#include <stdio.h>

long long calcularFatorial(int num) {
    long long fatorial = 1;
    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int n, valor;
    
    printf("Quantos valores deseja calcular o fatorial? ");
    scanf("%d", &n);
    

    if (n <= 0) {
        printf("numero invalido\n");
        return 1;
    }
    
    printf("\nTabela de Fatoriais:\n");
    printf("+------------------------------+\n");
    printf("| Valor  | Fatorial            |\n");
    printf("+------------------------------+\n");
    
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);
        

        if (valor < 0) {
            printf("| %6d | Nao definido         |\n", valor);
        } else {
            long long resultado = calcularFatorial(valor);
            printf("| %6d | %-19lld |\n", valor, resultado);
        }
    }
    
    printf("+------------------------------+\n");
    
    return 0;
}