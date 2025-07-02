#include <stdio.h>

int main (){
    /*20. Faça um algoritmo que leia vários 
    números inteiros e calcule o somatório 
    dos números negativos. O fim da leitura
    será indicado pelo número 0.*/

    int fun=0, s=0, n;
    while (fun==0)
    {
        printf("\nDiga n: ");
        scanf("%d", &n);
        n<0?s+=n:0;
        if(n==0){break;}
    }
    printf("A somatorio dos n negativos: %d", s);
    return 0;
}