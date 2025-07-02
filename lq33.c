#include <stdio.h>

int main (){
    /*33. Escrever um algoritmo que leia 20 valores 
    para uma variável N e, para cada um deles, 
    calcule a tabuada de 1 até N. Mostre a tabuada 
    na forma: 
    1 x N = N 2 x N = 2N 3 x N = 3N ...... N x N = N2 
    */
   int n;
   for (int j = 0; j < 2; j++)
   {
    printf("Diga n: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {printf("%d x %d = %d\n", i, n, n*i);}
   }
   
   return 0;
}