#include <stdio.h>

int main (){
    /*45. Foi feita uma pesquisa entre os 1000 habitantes 
    de uma região para coletar os seguintes dados: 
    sexo (0-feminino, 1- masculino), idade e altura. Faça 
    um algoritmo que leia as informações coletadas e 
    mostre as seguintes informações:
    (use o comando repita-até)
    a) média da idade do grupo;
    b) média da altura das mulheres;
    c) média da idade dos homens;
    d) percentual de pessoas com idade entre 18 e 35 anos (inclusive).*/

int fun=0, sexo, idade, hal, si=0, shm=0, sih=0, esp=0, qtdh=0, qtdm=0;

    while (fun<5)
    {
        printf("O seu sexo eh:\n0-feminino\n1-masculino\n");
        scanf("%d", &sexo);
        printf("Sua idade: ");
        scanf("%d", &idade);
        printf("A sua altura: ");
        scanf("%d", &hal);

        si+=idade;
        sih += (sexo==1)?idade:0;
        shm += (sexo==0)?hal:0;
        esp += (idade>=18 && idade<=35)?1:0;
        qtdh += (sexo==1)?1:0;
        qtdm += (sexo==0)?1:0;
    }
    printf("A media de idade eh: %.2f", (float)si/5);
    printf("A media de altura das mulheres eh: %.2f", (float)shm/qtdm);
    printf("A media de idade dos homens eh: %.2f", (float)sih/qtdh);
    printf("O percentual do grupo especifico eh: %.2f", (float)(esp/5)*100);
return 0;
}