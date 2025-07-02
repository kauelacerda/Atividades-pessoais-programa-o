#include <stdio.h>

int main (){
    /*17. Escrever um algoritmo que lê um 
    número não determinado de pares de 
    valores m,n, todos inteiros e 
    positivos, um par de cada vez, e 
    calcula e escreve a soma dos n inteiros 
    consecutivos a partir de m inclusive.*/

    int m, n, s=0, fun=0;

    do
    {
        printf("\nDiga m: ");
        scanf("%d", &m);
        if (m<0){break;}
        
        printf("\nDiga n: ");
        scanf("%d", &n);
        if (n<0){break;}

        for (m; m <= n; m++)
        {
            s+=m;
            printf("\n%d",m);
        }
        printf("\n%d", s);
        s=0;
    } while (fun==0);
    return 0;
}