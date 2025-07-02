#include <stdio.h>

int main (){
    /*41. Faça um algoritmo que leia as três notas 
    de 50 alunos de uma turma. Para cada aluno, 
    calcule a média ponderada, como segue: 
    MP = ( n1*2 + n2*4 + n3*3 ) / 10*/

    int nota1, nota2, nota3, md=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Diga a primeira nota: ");
        scanf("%d", &nota1);
        printf("Diga a segunda nota: ");
        scanf("%d", &nota2);
        printf("Diga a terceira nota: ");
        scanf("%d", &nota3);

        printf("A media dese aluno eh %.2f\n", (float)(nota1*2+nota2*4+nota3*3)/10);

        if (((nota1*2+nota2*4+nota3*3)/10)<7)
        {
            printf("Este aluno esta reprovado\n");
        }else
        {
            printf("Este aluno esta aprovado\n");
        }
        
        md+=((nota1*2+nota2*4+nota3*3)/10);
    }
    printf("A media da turma eh: %.2f", (float)md/5);
    return 0;
}