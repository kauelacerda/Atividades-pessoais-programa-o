#include <stdio.h>

int main (){
    /*7. Escreva um algoritmo que calcule a 
    média aritmética das 3 notas dos alunos 
    de uma classe. O algoritmo deverá ler,
    além das notas, o código do aluno e 
    deverá ser encerrado quando o código for 
    igual a zero.*/
    float n, mn=0, ca;
    do{
        printf("Qual o código de aluno: ");
        scanf("%f", &ca);
        if(ca==0)break;
        for (int i = 0; i < 3; i++)
        {
            printf("Diga a nota: ");
            scanf("\n%f", &n);
            mn += n;
            
        }
        printf("O aluno %.0f teve média de %.0f\n", ca, mn/3.0);
        mn=0;
    }while(ca!=0);
    
    return 0;
}