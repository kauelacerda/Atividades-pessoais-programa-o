#include <stdio.h>

int main (){
    /*13. Escrever um algoritmo que leia um 
    número n que indica quantos valores 
    devem ser lidos a seguir. Para cada 
    número lido, mostre uma tabela contendo
    o valor lido e o fatorial deste valor.*/

    int vi, vs=1;
    printf("Qual sera o valor: ");
    for (scanf("\n%d", &vi); vi > 0; vi--)
    {
        for (int i = 0; i < vi; i++)
        {
            printf("%d ",(vi-i));
            vs = vs*(vi-i);
            
        }
        printf("%d", vs);
        printf("\n");
        vs=1;
    }
    return 0;
}