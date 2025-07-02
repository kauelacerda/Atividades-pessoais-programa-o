#include <stdio.h>

int main (){
    /*19. Faça um algoritmo que leia uma quantidade 
    não determinada de números positivos. Calcule a
    quantidade de números pares e ímpares, a média 
    de valores pares e a média geral dos números 
    lidos. O número que encerrará a leitura será zero.*/

    int cont=0, n, par=0, imp=0, fun=1, md=0, mimp=0, mpar=0;

    while (fun>0)
    {
        printf("\nDiga um numero: ");
        scanf("\n%d", &n);
        n%2==1?imp++,mimp+=n:par++, mpar+=n;
        md+=n;
        cont++;
        if(n==0){break;}
    }
    printf("\nA media e: %f", (float)(md)/(float)(cont));
    printf("\nA media dos impares e: %f", (float)(mimp)/(float)(cont));
    printf("\nA media dos pares e: %f", (float)(mpar)/(float)(cont));
    printf("\nA quantidade de valores impares foi: %d", imp);
    printf("\nA quantidade de valores pares foi: %d", par);

    return 0;
}