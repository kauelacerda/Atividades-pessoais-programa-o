#include <stdio.h>
#include <math.h>

int main (){
    /*16. Escrever um algoritmo que lê um conjunto 
    não determinado de valores, um de cada vez, e 
    escreve uma tabela com cabeçalho, que deve ser 
    repetido a cada 20 linhas. A tabela conterá o 
    valor lido, seu quadrado, seu cubo e sua raiz
    quadrada.*/

    int cont=0, n, q1=0, q2=0,q3=0,q4=0, fun=1;
    printf("--- Cabecalho ---");
    do 
    {
        printf("\nDiga um numero: ");
        scanf("\n%d", &n);
        printf("\n%d ^2 = %d, %d ^3 = %d, √%d =~ %.2f", n, (int)pow(n, 2), n, (int)pow(n,3), n, (float)pow(n,1/2));
        cont++;

        if(cont%5==0){
            printf("\nDeseja continuar: 0-terminar ~ - continuar");
            scanf("\n%d", &fun);
            if(fun == 0){
                break;
            }else{
                printf("--- Cabecalho ---");
                continue;
        }
    }
}while (fun>0);
return 0;
}