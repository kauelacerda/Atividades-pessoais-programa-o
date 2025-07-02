#include <stdio.h>
int main (){
    /*5. Construir um algoritmo que calcule a média 
    aritmética de vários valores inteiros positivos, 
    lidos externamente. O final da leitura
    acontecerá quando for lido um valor negativo.*/
    int s=0, ma=0, c=0;

    while (s>=0)
    {
        printf("Digite números: ");
        scanf("%d", &s);
        ma+=s;
        c++;
    }
    printf("A média dos valores digitados é: %d", ma/c);
    
    return 0;
}