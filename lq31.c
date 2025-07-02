#include <stdio.h>

int main (){
    /*31. Escrever um algoritmo que lê 10 
    valores, um de cada vez, e conta 
    quantos deles estão no intervalo 
    [10,20] e quantos deles estão fora do 
    intervalo, escrevendo estas informações.*/

    int v, denv=0, forv=0;

    for (int i = 0; i < 10; i++)
    {
        printf("\nDiga um valor: ");
        scanf("%d", &v);
        v<=20&&v>=10?denv++:forv++;
    }
    printf("Valores fora: %d", denv);
    printf("\nValores dentro: %d", forv);
    return 0;
}