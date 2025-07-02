#include <stdio.h>
int main (){
    /*9. Escreva um algoritmo que leia 50 valores 
    e encontre o maior e o menor deles. Mostre o 
    resultado.*/
    int v, ma=0, mn=0;
    printf("digite os valores: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &v);
        v>ma?ma=v:ma;
        0<=v||v<mn?mn=v:mn;
    }
    printf("%d", ma);
    printf("%d", mn);
    return 0;
}