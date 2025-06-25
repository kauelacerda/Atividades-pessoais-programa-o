#include <stdio.h>

int main(){
    float salario, soSalario, mdSalario, MSalario, mdFilho, bSalario;
    int nFilho, SFilho, contador = 0;

    soSalario = 0;
    SFilho = 0;
    bSalario = 0;

     //o final da leitura de dados se dará com a entrada de um salario negativo; use comando faça

     while(salario >= 0){
       
    
      printf("Informe se numero de filhos"); scanf("%d", &nFilho);

      soSalario = soSalario + salario;
      SFilho = SFilho + nFilho;

      if (salario <= 100){
        bSalario++;
      }
      if(contador == 0){
        MSalario = salario;
      }
      contador++;
        printf("Informe seu salario: R$"); scanf("%f", &salario);
      printf("\n");
     }

     mdSalario = soSalario/10.0;
    mdFilho = ((float) SFilho/10.0);

    bSalario = ((float) bSalario/10.0)*100;

    printf("A media de salario da população é de %f \n", mdSalario);
    printf("A media do numero de filhos da população é de %f \n", mdFilho);
    printf("O maior salario da população é de R$%f \n", MSalario);
    printf("O percentual  de pessoas com salario de ate R$ 100,00 é de %f \n", bSalario);


     



}