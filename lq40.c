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

int main (){
    /*40. Escrever um algoritmo que lê um 
    valor n que indica quantos valores 
    devem ser lidos para m, valores 
    inteiros e positivos, com leitura de 
    um valor de cada vez. Escreva uma 
    tabela contendo o valor lido, o 
    somatório dos inteiros de 1 até m e o
    fatorial de m.*/

    int n, m, s=0;

    printf("Diga n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Diga m: ");
        scanf("%d", &m);
        for (int j = 1; j < m; j++){s+=j;}
        printf("A somatoria eh %d", s);
        printf("\nO fatorial de %d eh %d", m, calcularFatorial(m));
    }
    
}