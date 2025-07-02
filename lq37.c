#include <stdio.h>

int main (){
    /*37. Escrever um algoritmo que leia um 
    valor X e calcule e mostre os 20 
    primeiros termos da série:
    1 1 1 1 .....
    X X2 X3 X4*/

    int X;

    printf("Diga X: ");
    scanf("%d", &X);

    for (int i = 0; i < 20; i++)
    {
        printf("1 ");
    }
    printf("\n");
    for (int i = 1; i <= 20; i++)
    {
        printf("%d ", X*i);
    }
    return 0;
}