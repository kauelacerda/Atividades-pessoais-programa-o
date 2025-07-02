#include <stdio.h>

int main (){
    /*8. Escreva um algoritmo que calcule a 
    média dos números digitados pelo usuário,
    se eles forem pares. Termine a leitura se
    o usuário digitar zero (0).*/
    float v, m;
    int i;
    printf("digite os valores, digite 0 para ver a média: ");
    for (i = 1; i != 0; i++)
    {
        scanf("%f", &v);
        if(v==0)break;
        if ((int) v%2==0){
            m += v;
        }
        
    }
    printf("A média é %.1f", m/(i-1));
    return 0;
}