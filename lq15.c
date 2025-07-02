#include <stdio.h>

int main (){
    /*15. Escrever um algoritmo que leia uma 
    quantidade desconhecida de números e 
    conte quantos deles estão nos seguintes 
    intervalos: [0.25], [26,50], [51,75] e 
    [76,100]. A entrada de dados deve 
    terminar quando for lido um número
    negativo.*/

    int cont=0, n, q1=0, q2=0,q3=0,q4=0, fun=1;

    do 
    {
        printf("\nDiga um numero: ");
        scanf("\n%d", &n);
        if (0>n)
        {
            break;
        }else if (0<=n && n<=25)
        {
            q1++;
        }else if (25<n && n<=50)
        {
            q2++;
        }else if (50<n && n<=75)
        {
            q3++;
        }else if (75<n && n<=100)
        {
            q4++;
        }
    }while (fun>0);
    printf("Numero entre 0 e 25: %d\n", q1);
    printf("Numero entre 26 e 50: %d\n", q1);
    printf("Numero entre 51 e 75: %d\n", q1);
    printf("Numero entre 76 e 100: %d", q1);
    return 0;

}