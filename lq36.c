#include <stdio.h>

int calcularFatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    int fac = 1;
    for (int i = 2; i <= num; i++) {
        fac *= i;
    }
    return fac;
}

int main(){
    /*36. Escrever um algoritmo que leia 
    um número N que indica quantos 
    valores devem ser lidos a seguir.
    Para cada número lido, mostre uma 
    tabela contendo o valor lido e o 
    fatorial deste valor.*/

    int N;

    printf("Quantos numeros devem ser lidos: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int n;
        printf("Digite o numero: ");
        scanf("%d", &n);
        
        int fac = calcularFatorial(n);
        
        printf("%d %d\n", n, fac);
        printf("\n");
    }
    
    return 0;
    }
    
