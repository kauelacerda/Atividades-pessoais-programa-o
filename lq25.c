#include <stdio.h>

int main (){
    /*25. Uma empresa deseja aumentar seus preços 
    em 20%. Faça um algoritmo que leia o código e 
    o preço de custo de cada produto e calcule o 
    preço novo. Calcule também, a média dos preços 
    com e sem aumento. Mostre o código e o preço 
    novo de cada produto e, no final, as médias. 
    A entrada de dados deve terminar quando for 
    lido um código de produto negativo. (Use o 
    comando enquanto-faça)*/

    int fun=0, cod, pre, preAd;

    while (fun==0)
    {
        printf("Qual o codigo do produto: ");
        scanf("%d", &cod);
        if (cod<0){break;}
        printf("Qual o preco do produto: ");
        scanf("%d", &pre);

        preAd = pre+pre*0.2;

        printf("O produto %d agora tem o preco de %d", cod, preAd);
        printf("\nA media entre o preco antigo e o novo: %.2f", (float)((pre+preAd)/2));
    }
    return 0;
}