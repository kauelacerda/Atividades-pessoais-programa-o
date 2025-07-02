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
    /*53. Faça um algoritmo que calcule os 
    20 primeiros números primos, dados os 
    tres primeiros 1,2 e 3.*/
    int p=4, fun=0;
    
    while (fun < 20)
    {
        if (ehPrimo(p))
        {
            printf("%d\n", p);
            fun++;
        }
        p++;
    }
    return 0;
}