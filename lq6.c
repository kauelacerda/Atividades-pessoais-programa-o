#include <stdio.h>
int main (){
    /*6. Em uma eleição presidencial existem quatro 
    candidatos. Os votos são informados através de
    códigos. Os dados utilizados para a contagem dos
    votos obedecem à seguinte codificação:
        - 1,2,3,4 = voto para os respectivos candidatos;
        - 5 = voto nulo;
        - 6 = voto em branco;
    Elabore um algoritmo que leia o código do 
    candidado em um voto. Calcule e escreva:
        - total de votos para cada candidato;
        - total de votos nulos;
        - total de votos em branco;
    Como finalizador do conjunto de votos, tem-se o 
    valor 0.*/
    int atv=0, vn=0, vb=0, can1=0, can2=0, can3=0, can4=0;

    printf("Coloque seu voto:\n1-Candidato 1\n2-Candidato 2\n3-Candidato 3\n4-Candidato 4\n5-Nulo\n6-Branco\n\n0-terminar\n");
    do{
        scanf("%d", &atv);
        switch ((int)atv)
        {
        case 1:
            can1++;
            break;
        case 2:
            can2++;
            break;
        case 3:
            can3++;
            break;
        case 4:
            can4++;
            break;
        case 5:
            vn++;
            break;
        case 6:
            vb++;
            break;
        default:
            break;
        }
    }while(atv!=0);
    
    printf("\nTotal de votos para Candidato1 %d", can1);   
    printf("\nTotal de votos para Candidato2 %d", can2);
    printf("\nTotal de votos para Candidato3 %d", can3);
    printf("\nTotal de votos para Candidato4 %d", can4);
    printf("\nTotal de votos nulos %d", vn);
    printf("\nTotal de votos em branco %d", vb); 
    return 0;
    
}