#include <stdio.h>

int main (){
    /*12. Escrever um algoritmo que leia 
    20 valores para uma variável n e, 
    para cada um deles, calcule a tabuada
    de 1 até n. Mostre a tabuada na 
    forma:
    2 x n = 2n
    3 x n = 3n
    ....... n x n = n2*/

    int n;

    for (int i = 0; i < 20; i++)
    {
        printf("\nDiga n: ");
        scanf("\n%d", &n);
        for (int j = 0; j <= n; j++)
        {
            printf("\n%d", j*n);
        }
        
    }
    return 0;
}