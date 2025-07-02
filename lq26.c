#include <stdio.h>

int main(){
    /*26. Escreva um algoritmo que gere o 
    números de 1000 a 1999 e escreva 
    aqueles que dividido por 11 dão resto 
    igual a 5.*/

    for (int i = 1000; i < 2000; i++)
    {
        if (i%11==5)
        {
            printf("\n%d", i);
        }
    }
    return 0;
}