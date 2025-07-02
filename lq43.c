#include <stdio.h>
void ordenarDecrescente(int *valores, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (valores[i] < valores[j]) {
                // Troca os valores
                int temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp;
            }
        }
    }
}
int main (){
    /*43. Fazer um algoritmo que leia 5 grupos 
    de 4 valores (A,B,C,D) e mostre-os na 
    ordem lida. Em seguida, ordene-os em ordem 
    decrescente e mostre-os novamente, já 
    ordenados.*/
    int qtdg=1,
        valg=4,
        grupo[qtdg][valg];

    for (int i = 0; i < qtdg; i++) {
        printf("Grupo %d (A B C D): ", i + 1);
        scanf("%d %d %d %d", &grupo[i][0], &grupo[i][1], &grupo[i][2], &grupo[i][3]);
    }
    for (int i = 0; i < qtdg; i++) {
    printf("Grupo %d: %d %d %d %d\n", i + 1, 
            grupo[i][0], grupo[i][1], grupo[i][2], grupo[i][3]);
    }  
    for (int i = 0; i < qtdg; i++) {
    ordenarDecrescente(grupo[i], valg);
    }
    for (int i = 0; i < qtdg; i++) {
        printf("Grupo %d: %d %d %d %d\n", i + 1, 
               grupo[i][0], grupo[i][1], grupo[i][2], grupo[i][3]);
    }
    return 0;

}