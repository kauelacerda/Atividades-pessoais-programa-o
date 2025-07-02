#include <stdio.h>

int main (){
    /*3. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, 
    coletando dados sobre o salário e número de filhos. A prefeitura deseja 
    saber:
        a) média do salário da população;
        b) média do número de filhos;
        c) maior salário;
        d) percentual de pessoas com salário até R$100,00.
    O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando ENQUANTO-FAÇA)*/

    float s, f, ms=0, mf=0, mm=0, ps10=0, atcon=0 ;
    int ati=0;
    do{
        printf("Qual é o seu salário: ");
        scanf("%f", &s);
            if(s<0)break;
        printf("Quantos filhos você tem: ");
        scanf("%f", &f);
            if(f<0)break;
        ms += s;
        mf += f;
            if(s>mm){
                mm=s;
            }
            if(s>100.00){
                ps10++;
            }
        atcon++;
        printf("Deseja adicionar mais algo:\n0-continuar\n1-terminar\n");
        scanf("%d", &ati);
    }while(ati==0);
    printf("A média salarial é: %.2f\nA média de filhos é: %.2f", ms/atcon, mf/atcon);
    printf("\nO maior salário é de: %.2f", mm);
    printf("\nO percentual de pessoas com salário abaixo de 100 é: %.2f", ps10/atcon*100);
    return 0;
}