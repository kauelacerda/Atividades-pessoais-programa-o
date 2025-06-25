#include <stdio.h>

int main() {
    float chico = 1.50; 
    float ze = 1.10;     
    int anos = 0;
    
    float crescimento_chico = 0.02;  
    float crescimento_ze = 0.03;     
    
    printf("Altura inicial - Chico: %.2f m, Zé: %.2f m\n", chico, ze);
    
    while (ze <= chico) {
        chico += crescimento_chico;
        ze += crescimento_ze;
        anos++;

    }
    
    printf("Zé será maior que Chico em %d anos.\n", anos);
    printf("Nesse momento:\n");
    printf("Chico terá %.2f metros\n", chico);
    printf("Zé terá %.2f metros\n", ze);
    
    return 0;
}