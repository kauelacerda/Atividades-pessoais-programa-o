#include <stdio.h>
#include <limits.h>

#define NUM_CIDADES 200
#define TAM_ESTADO 3

int main() {
    int codigos[NUM_CIDADES];
    char estados[NUM_CIDADES][TAM_ESTADO];
    int veiculos[NUM_CIDADES];
    int acidentes[NUM_CIDADES];
    
    int i;
    
    // Leitura dos dados
    printf("Digite os dados das %d cidades:\n", NUM_CIDADES);
    for (i = 0; i < NUM_CIDADES; i++) {
        printf("\nCidade %d:\n", i+1);
        printf("Codigo: ");
        scanf("%d", &codigos[i]);
        printf("Estado (sigla 2 letras): ");
        scanf("%2s", estados[i]);
        printf("Numero de veiculos: ");
        scanf("%d", &veiculos[i]);
        printf("Numero de acidentes com vitimas: ");
        scanf("%d", &acidentes[i]);
    }
    
    // a) Maior e menor índice de acidentes
    int max_acidentes = INT_MIN;
    int min_acidentes = INT_MAX;
    int cidade_maior = 0, cidade_menor = 0;
    
    // b) Média de veículos
    int total_veiculos = 0;
    
    // c) Média de acidentes no RS
    int total_acidentes_rs = 0;
    int cidades_rs = 0;
    
    for (i = 0; i < NUM_CIDADES; i++) {
        // Processamento para item a)
        if (acidentes[i] > max_acidentes) {
            max_acidentes = acidentes[i];
            cidade_maior = codigos[i];
        }
        if (acidentes[i] < min_acidentes) {
            min_acidentes = acidentes[i];
            cidade_menor = codigos[i];
        }
        
        // Processamento para item b)
        total_veiculos += veiculos[i];
        
        // Processamento para item c)
        if (estados[i][0] == 'R' && estados[i][1] == 'S') {
            total_acidentes_rs += acidentes[i];
            cidades_rs++;
        }
    }
    
    // Resultados
    printf("\nResultados:\n");
    
    // a)
    printf("a) Maior indice de acidentes: %d (Cidade %d)\n", max_acidentes, cidade_maior);
    printf("   Menor indice de acidentes: %d (Cidade %d)\n", min_acidentes, cidade_menor);
    
    // b)
    printf("b) Media de veiculos nas cidades: %.2f\n", (float)total_veiculos / NUM_CIDADES);
    
    // c)
    if (cidades_rs > 0) {
        printf("c) Media de acidentes no RS: %.2f\n", (float)total_acidentes_rs / cidades_rs);
    } else {
        printf("c) Nenhuma cidade do RS na amostra.\n");
    }
    
    return 0;
}