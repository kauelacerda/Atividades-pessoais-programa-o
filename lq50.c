#include <stdio.h>

int main (){
    /*50. Faça um algoritmo que leia 2 valores 
    inteiros e positivos: X e Y. O algoritmo 
    deve calcular e escrever a função potência 
    X Y*/
    int x, y, p=1;

    printf("Diga x: ");
    scanf("%d", &x);
    if (x>0)
    {
        printf("Diga y: ");
        scanf("%d", &y);
        if (x>0)
        {
            for (int i = 0; i < y; i++)
            {
                p*=x;
            }
        }
    }
    printf("%d elevado por %d eh %d", x, y, p);
    
    return 0;
}