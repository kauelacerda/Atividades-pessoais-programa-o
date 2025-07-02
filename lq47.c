#include <stdio.h>
#include <string.h>

int main (){
    /*47. Uma loja tem 150 clientes cadastrados 
    e deseja mandar uma correspondência a cada 
    um deles anunciando um bônus especial. 
    Escreva um algoritmo que leia o nome do 
    cliente e o valor das suas compras no ano 
    passado e calcule um bônus de 10% se o valor 
    das compras for menor que 500.000 e de 15 %, 
    caso contrário.*/

    int fun=0, gasto;
    float bonus=1;
    char cons[20];
    while (fun<5)
    {
        printf("\nSeu nome: ");
        scanf("%s", &cons);
        printf("\nQuanto foi seu gasto ano passado: ");
        scanf("%d", &gasto);
    
        bonus += gasto*((gasto<500000)?1.1:1.5);

        printf("\n%s seu valor de bonus: %.2f", cons, bonus);
        bonus=0;
    }
return 0;
}