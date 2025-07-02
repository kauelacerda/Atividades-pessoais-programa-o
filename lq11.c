#include <stdio.h>

int main (){
    /*11. Escreva um algoritmo que leia um 
    número n (número de termos de uma 
    progressão aritmética), a1 ( o primeiro
    termo da progressão) e r (a razão da 
    progressão) e escreva os n termos desta
    progressão, bem como a soma dos
    elementos.*/

    int n, a1, r, s;
    printf("Quantos termos tera a progressao aritmetica: ");
    scanf("\n%d", &n);
    printf("\nQual sera o primeiro termo: ");
    scanf("\n%d", &a1);
    printf("Qual sera a razao: ");
    scanf("\n%d",&r);

    for (int i = 0; i < n; i++)
    {
        s += a1+r*i;
        printf("\n%d",s);
    }
    return 0;
}