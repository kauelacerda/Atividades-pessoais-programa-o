#include <stdio.h>

int main (){
    /*18. Escrever um algoritmo que lê um 
    número não determinado de valores para
    m, todos inteiros e positivos, um de 
    cada vez. Se m for par, verificar 
    quantos divisores possui e escrever 
    esta informação. Se m for ímpar e menor 
    do que 10 calcular e escrever o fatorial 
    de m. Se m for ímpar e maior ou igual a 
    10 calcular e escrever a soma dos 
    inteiros de 1 até m.*/

    int m, fun=0, fac=1;
    do{
        printf("\nDiga m: ");
        scanf("%d",&m);
        if(m<0){break;}
            
        if (m%2==0)
        {
            for (int i = 0; i < m; i++)
            {    
                if (m%(i+1)==0)
                {
                    printf("\n%d", i+1);
                }
            }        
        }else{
            if (m<10)
            {
                for (int j = 0; j < m; j++)
                {
                    printf("\n%d", (m-j));
                    fac *= m-j;
                }
                printf("\n%d", fac);
                fac=0;
            }else{
                for (int j = 0; j <= m; j++)
                {
                    printf("\n%d", j);
                    fac+=j;
                }
                printf("\n%d", fac);
            }
        }
        }while(fun==0);
        return 0;
    }
    
