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
    /*51. Faça um algoritmo que 
    calcule o fatorial de um 
    número.*/
    int x;
    printf("Diga x: ");
    scanf("%d", &x);

    printf("%d! = %d", x, calcularFatorial(x));
    
    return 0;
}