#include <stdio.h>

int main (){
    /*42. Faça um algoritmo que calcule a seguinte soma: 
    H = 10 + 10 + 10 + ... + 10
    O algoritmo deve ler um número n (inteiro e positivo) 
    e mostrar o resultado final de H. A soma deve ser 
    calculada apenas uma vez.*/

    int h=0, n;

    printf("Diga n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        h+=10;
    }
    printf("O resultado eh: %d", h);
    return 0;
}