#include <stdio.h>

int main (){
    /*21. Faça um algoritmo que leia vários 
    números inteiros e positivos e calcule 
    o produtório dos números pares. O fim 
    da leitura será indicado pelo número 0.*/

    int fun=0, p=1, n;
    while (fun==0)
    {
        printf("\nDiga n: ");
        scanf("%d", &n);
        if(n==0){break;}
        n%2==0?p*=n:p;
    }
    printf("O produtorio dos numeros pares: %d", p);
    return 0;
}