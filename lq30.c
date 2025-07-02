#include <stdio.h>

int main (){
    /*30. Escrever um algoritmo que gera e 
    escreve os números ímpares entre 100 e
    200.*/

    for (int i = 100; i < 200; i++)
    {
        if (i%2==1)
        {
            printf("\n%d", i);
        }
        
    }
    return 0;
}