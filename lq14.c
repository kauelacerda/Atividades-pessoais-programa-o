#include <stdio.h>

int main (){
    /*14. Escrever um algoritmo que leia um 
    número não determinado de valores e 
    calcule a média aritmética dos valores
    lidos, a quantidade de valores positivos, 
    a quantidade de valores negativos e o 
    percentual de valores negativos e
    positivos. Mostre os resultados.*/

    int cont=0, n, neg=0, pos=0, fun=1, md=0;

    while (fun>0)
    {
        printf("\nDiga um numero: ");
        scanf("\n%d", &n);
        n>=0?pos++:neg++;
        md+=n;
        cont++;
        
        if(cont%2==0)
        {
            printf("\nDeseja continuar: 0-terminar ~ - continuar");
            scanf("\n%d", &fun);
            if(fun == 0){
                break;
            }else{
                continue;
            }
        }
    }
    printf("\nA media e: %f", md/cont);
    printf("\nA quantidade de valores positivos foi: %d", pos);
    printf("\nA quantidade de valores negativos foi: %d", neg);
    printf("\nO percentual de numeros positivos foi: %.f", (float)pos/(float)cont*100);
    printf("\nO percentual de numeros negativos foi: %.f", (float)neg/(float)cont*100);

    return 0;
}