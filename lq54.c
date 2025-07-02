#include <stdio.h>

int main (){
    /*54. Faça uma algoritmo que receba 2 
    numeros e divida o intervalo entre 
    eles em 3 partes iguais. Obs. Faça a 
    consistência para que os extremos 
    não sejam iguais.*/
    float num1, num2;
    float parte1, parte2;
    

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    while (num1 == num2) {
        printf("Digite o segundo numero novamente: ");
        scanf("%f", &num2);
    }

    float intervalo = num2 - num1;
    parte1 = num1 + intervalo/3;
    parte2 = num1 + 2*intervalo/3;
    
    printf("1. De %.2f a %.2f\n", num1, parte1);
    printf("2. De %.2f a %.2f\n", parte1, parte2);
    printf("3. De %.2f a %.2f\n", parte2, num2);
    
    return 0;
}