#include <stdio.h>

int main (){
    /*35. Escrever um algoritmo que leia um conjunto 
    de 50 informações contendo, cada uma delas, a 
    altura e o sexo de uma pessoa (código=1, 
    masculino código=2, feminino), calcule e mostre 
    o seguinte:
    a) a maior e a menor altura da turma
    b) a média da altura das mulheres
    c) a média da altura da turma.*/
    int sexo, hal, mah=0, mnh=0, s=0, sf=0, quantf=0;

    for (int i = 0; i < 50; i++)
    {
        printf("O sexo do aluno: \n1-masculino\n2-feminino\n");
        scanf("%d", &sexo);
        printf("A altura do aluno: ");
        scanf("%d", &hal);
        s+=hal;
        sf += sexo==2?hal:0;
        sexo==2?quantf++:0;
        if(mah>hal){
            mah=mah;
        }else{
            mah = hal;
        }
        if (mnh<hal&&mnh!=0)
        {
            mnh=mnh;
        }else{
            mnh=hal;
        }
    }
    printf("A maior altura %d", mah);
    printf("\nA menor altura %d", mnh);
    printf("\nA media de altura feminina %.2f", (float)sf/quantf);
    printf("\nA media da turma %.2f", (float)s/5);

    return 0;
}