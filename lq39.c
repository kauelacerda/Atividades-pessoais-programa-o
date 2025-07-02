#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Função para verificar se um número é perfeito
bool ehPerfeito(long long num) {
    if (num <= 1) return false;
    
    long long soma = 1; // 1 é divisor de todos os números
    long long limite = sqrt(num);
    
    for (long long i = 2; i <= limite; i++) {
        if (num % i == 0) {
            soma += i;
            long long outro_divisor = num / i;
            if (outro_divisor != i) {
                soma += outro_divisor;
            }
        }
    }
    
    return soma == num;
}
int main (){
    /*39. Escrever um algoritmo que gera 
    e escreve os 5 primeiros números 
    perfeitos. Um número perfeito é 
    aquele que é igual a soma dos seus 
    divisores. 
    (Ex.: 6 = 1+2+3; 28= 1+2+4+7+14 etc).*/

    int fun=0;
    long long com=2;
    while (fun < 5)
    {
        if (ehPerfeito(com))
        {
            printf("%lld\n", com);
            fun++;
        }
        com++;
    }    
    return 0;

}