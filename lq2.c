#include <stdio.h>

int main (){
    /*Questão 2. Escrever um algoritmo que lê
    um valor N inteiro e positivo e que
    calcula e escreve o valor de E.
    
    E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!*/

    float n, e;
    int i, j, fac;

    printf("Quanto é N? ");
    scanf("%f", &n);

    if (n <= 0 ){
        printf("N invalido");
        return 0;
    }else{
        for (i = 0; i<=n; i++){
            fac = 1;
            for (j = 1; j<=i; j++){
                fac *= j;
        }
        e = e + 1.0/fac;
    }
    printf("O valor de E é: %f", e);
    return 0;

    }

    
}