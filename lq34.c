#include <stdio.h>

int main (){
    /*34. Escrever um algoritmo que leia 5 conjuntos 
    de 2 valores, o primeiro representando o número 
    de um aluno, e o segundo representando a sua 
    altura em centímetros. Encontre o aluno mais 
    alto e o mais baixo. Mostre o número do aluno 
    mais alto e do mais baixo, junto com suas alturas.*/

    int nal, hal, mahal=0, mnhal=0, nma, nmn;

    for (int i = 0; i < 3; i++)
    {
        printf("O numero do aluno: ");
        scanf("%d", &nal);
        printf("A altura do aluno: ");
        scanf("%d", &hal);
        
        if(mahal>hal){
            mahal=mahal;
            nma=nma;
        }else{
            mahal = hal;
            nma = nal;
        }
        if (mnhal<hal&&mnhal!=0)
        {
            mnhal=mnhal;
            nmn=nmn;
        }else{
            mnhal=hal;
            nmn=nal;
        }
    }
    printf("O maior aluno e %d com %d\n", nma, mahal);
    printf("O menor aluno e %d com %d", nmn, mnhal);
    return 0;
}