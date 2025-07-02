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
    /*52. Faça um algoritmo que calcule a 
    combinação e arranjo de um conjunto de 
    tamanho N em subconjuntos de p elementos.*/
    int N, p;

    printf("Diga N: ");
    scanf("%d", &N);

    printf("Diga p: ");
    scanf("%d", &p);

    if (N<0||p<0||p>N)
    {
        printf("Erro");
        return 1;
    }
    
    int fac_N = calcularFatorial(N);
    int fac_p =  calcularFatorial(p);
    int fac_N_p = calcularFatorial(N-p);

    int comb = fac_N / (fac_p * fac_N_p);
    int arra = fac_N / fac_N_p;

    printf("Combinacao C(%d, %d) = %d\n", N, p, comb);
    printf("Arranjo A(%d, %d) = %d\n", N, p, arra);
    return 0;
}