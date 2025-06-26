#include <stdio.h>

int main() {
    int codigo;
    float nota1, nota2, nota3, media;
    
    while (1) {
            printf("\nDigite o codigo do aluno: ");
        scanf("%d", &codigo);
        
        
        if (codigo < 0) {
            printf("tem que ser positivo.\n");
            break;
        }
        
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
        
        float maior_nota = nota1;
        float outras_notas[2] = {nota2, nota3};
        
        if (nota2 > maior_nota) {
            maior_nota = nota2;
            outras_notas[0] = nota1;
            outras_notas[1] = nota3;
        }
        if (nota3 > maior_nota) {
            maior_nota = nota3;
            outras_notas[0] = nota1;
            outras_notas[1] = nota2;
        }
        media = (maior_nota * 4 + outras_notas[0] * 3 + outras_notas[1] * 3) / 10;
        
        // Exibe os resultados
        printf("\nResultado para o aluno %d:\n", codigo);
        printf("Notas: %.1f, %.1f, %.1f\n", nota1, nota2, nota3);
        printf("Media ponderada: %.1f\n", media);
        
        if (media >= 5.0) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }
    
    return 0;
}