#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool ehPrimo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    int limite = sqrt(num) + 1;
    for (int i = 3; i < limite; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main (){
    /*38. Escrever um algoritmo que calcula e escreve 
    o produto dos números primos entre 92 e 1478.*/
    int p=1;
    
    for (int i = 92; i < 1478; i++)
    {
        if(ehPrimo(i)){
            printf("%d\n", i);
            p*=i;
        }
    }
    printf("%d", p);
    return 0;
}