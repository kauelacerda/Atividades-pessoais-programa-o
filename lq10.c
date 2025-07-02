#include <stdio.h>

int main (){
    /*10. Escreva um algoritmo que leia o código de um 
    aluno e suas três notas. Calcule a média ponderada 
    do aluno, considerando que o peso para a maior 
    nota seja 4 e para as duas restantes, 3. Mostre o 
    código do aluno, suas três notas, a média calculada 
    e uma mensagem "APROVADO" se a média for maior ou 
    igual a 5 e "REPROVADO" se a média for menor que 5.
    Repita a operação até que o código lido seja negativo.*/

    float n1=0, n2=0, n3=0, mn=0, ca, mmn=0.0, man=0.0, mnn=0.0;
    do{
        printf("\nQual o código de aluno: ");
        scanf("%f", &ca);
        if(ca==0)break;
            printf("Diga a nota: ");
            scanf("\n%f", &n1);
            printf("Diga a nota: ");
            scanf("\n%f", &n2);
            printf("Diga a nota: ");
            scanf("\n%f", &n3);
        
            if (n1 >= n2 && n1 >= n3)
            {
                man = n1;
                mmn = (n2>=n3)?n2:n3;
                mnn = (n2>=n3)?n3:n2;
            }else if(n2>=n1 && n2>=n3){
                man = n2;
                mmn = (n1>=n3)?n1:n3;
                mnn = (n1>=n3)?n3:n1;
            }else{
                man = n3;
                mmn = (n1>=n2)?n1:n2;
                mnn = (n1>=n2)?n2:n1;
        }
        mn = ((man*4)+(mmn*3)+(mnn*3))/3;

        printf("\nO Codigo de Aluno %f", ca);
        printf("\nAs notas foram %.2f, %.2f, %.2f", n1, n2, n3);
        printf("\nA sua media foi: %.2f", mn);
        mn>50.0?printf("\nAprovado"):printf("\nReprovado");
        
    }while(ca!=0);
    
    return 0;
}