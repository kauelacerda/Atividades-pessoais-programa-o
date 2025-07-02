#include <stdio.h>

int main (){
    /*32. Escrever um algoritmo que lê 5 
    pares de valores a, b, todos inteiros 
    e positivos, um par de cada vez, e 
    com a < b, escreve os inteiros pares 
    de a até b, incluindo o a e o b se 
    forem pares.*/

    int a, b;

    printf("Diga a: ");
    scanf("%d", &a);
    printf("Diga b: ");
    scanf("%d", &b);

    if (a<b)
    {
        for (int i = a; i <= b; i++)
        {if (i%2==0){printf("\n%d", i);}}
    }else{
        printf("👍👍");
    }
    return 0;
}