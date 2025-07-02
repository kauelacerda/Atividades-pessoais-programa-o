#include <stdio.h>

int main (){
    /*27. Escreva um algoritmo que leia 500 
    valores inteiros e positivos e:
    a) encontre o maior valor;
    b) encontre o menor valor;
    c) calcule a média dos números lidos.*/
    int n, mn=0,ma=0,s=0;

    for (int i = 0; i < 5; i++)
    {
        printf("N = ");
        scanf("%d", &n);

        s+=n;

        mn = mn<n&&mn!=0?mn:n;
        ma = ma>n?ma:n;
    }
    printf("Maior n: %d", ma);
    printf("\nMenor n: %d", mn);
    printf("\nMedia de ns: %.2f", (float)s/5);

    return 0;
}