#include <stdio.h>
int calcularFatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    int fac = 1;
    for (int i = 2; i <= num; i++) {
        fac *= i;
    }
    return fac;
}
int main (){
    /*49.Faça um algoritmo que lê um valor N inteiro e positivo 
    e que calcula e escreve o fatorial de N (N!).*/
    int N;
    printf("Diga N: ");
    scanf("%d", &N);

    if (N>0){
        printf("%d! = %d", N, calcularFatorial(N));
    }
    
    return 0;
}