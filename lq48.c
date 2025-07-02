#include <stdio.h>

int main (){
    /*48. Faça um algoritmo que mostre os conceitos 
    finais dos alunos de uma classe de 75 alunos, 
    considerando (use o comando CASO):
    a) os dados de cada aluno (número de matrícula e 
    nota numérica final) serão fornecidos pelo usuário
    b) a tabela de conceitos segue abaixo:*/
    int fun=0, mat, nota;
    char letra;
    
    while (fun<75)
    {
        printf("\nSeu numero de matricula: ");
        scanf("%d", &mat);
        printf("\nSua nota final: ");
        scanf("%d", &nota);

        switch (nota)
        {
        case 0 ... 49:
            letra='D';
            break;
        case 50 ... 69:
            letra='C';
            break;
        case 70 ... 89:
            letra='B';
            break;
        case 90 ... 100:
            letra='A';
            break;
        default:
            break;
        }
        printf("O seu resultado: %c", letra);
    }
    return 0;
}