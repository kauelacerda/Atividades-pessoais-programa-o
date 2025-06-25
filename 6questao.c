#include <stdio.h>

int main() {
    int voto;
    int branco = 0;
    int nulo = 0;
    int candidatos[4] = {0};
    printf("qual e sue candidato1,2,3,4\n");
    printf("OU nulo 5 ou branco 6 e 0 para enserrar:\n");

    while (1) { 
        printf("Digite um numero: ");
        scanf("%d", &voto);

        
        if (voto == 0) {
            break; 
        }

        switch (voto) {
            case 1: case 2: case 3: case 4:
                candidatos[voto-1]++; 
                break;
            case 5:
                nulo++;
                break;
            case 6:
                branco++;
                break;
            default:
                printf(" O número não corresponde a nenhum resultado ou voto.\n");
        }

    }
     printf("\nRESULTADO DA ELEICAO:\n");
    for (int i = 0; i < 4; i++) {
        printf("Candidato %d: %d votos\n", i+1, candidatos[i]);
    }
    printf("Votos nulos: %d\n", nulo);
    printf("Votos em branco: %d\n", branco);
    printf("Total de votos: %d\n", 
           candidatos[0] + candidatos[1] + candidatos[2] + candidatos[3] + nulo + branco);
    return 0;
}