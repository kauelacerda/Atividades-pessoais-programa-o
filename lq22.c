#include <stdio.h>

int main (){
    /*22. Foi feita uma pesquisa entre os habitantes 
    de uma região. Foram coletados os dados de idade, 
    sexo (M/F) e salário.
    Faça um algoritmo que informe:
    a) a média de salário do grupo;
    b) maior e menor idade do grupo;
    c) quantidade de mulheres com salário até R$100,00.
    Encerre a entrada de dados quando for digitada uma 
    idade negativa. (Use o comando enquanto-faça e não use vetores
    ou matrizes)*/
    int fun=0, idade, sexo, sal,  con=0;
    //homem
    int mHsal=0, maHid=0, mnHid=0, quantH=0;
    //mulher
    int mMsal=0, maMid=0, mnMid=0, msal100=0, quantM=0;


    while (fun==0)
    {
        printf("Diga sua idade: ");
        scanf("%d", &idade);
        if (idade<0){break;}
        printf("Diga seu sexo: \n1 - Homem\n2 - Mulher ");
        scanf("%d", &sexo);
        printf("Diga seu salario: ");
        scanf("%d", &sal);
        if (sexo == 1)
        {
            mHsal+=sal;
            maHid = maHid<idade?idade:maHid;
            mnHid = mnHid>idade?idade:mnHid;
            quantH++;
        }else{
            mMsal+=sal;
            maMid = maMid<idade?idade:maMid;
            mnMid = mnMid>idade?idade:mnMid;
            sal>=100?msal100++:0;
            quantM++;
        }
        con++;
    }
    printf("\nA media salarial dos homens foi %.2f", (float)mHsal/(float)quantH);
    printf("\nA media salarial dos mulheres foi %.2f", (float)mMsal/(float)quantM);
    printf("\nA maior idade dos homens foi %d", maHid);
    printf("\nA menor idade dos homens foi %d", mnHid);
    printf("\nA maior idade dos mulheres foi %d", maMid);
    printf("\nA menor idade dos mulheres foi %d", mnMid);
    printf("\nA quantidade de mulheres com salario igual ou acima de %d", msal100);

    return 0;

}