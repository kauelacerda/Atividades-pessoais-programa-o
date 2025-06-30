
#include <stdio.h>
#include <stdbool.h>
int main(){
    int D, Mes, Ano, diferença;
    int D1, Mes1, Ano1;





printf("Digite primeira a data (DD MM AAAA): ");
printf("D: ");
    scanf("%d", &D);
printf("M: ");
    scanf("%d", &Mes);
printf("A: ");
    scanf("%d", &Ano);

D = 1;
Ano = 1*365;
Mes = 1*30;
printf("segunda data (DD MM AAAA): ");
printf("D: ");
    scanf("%d", &D1);
printf("M: ");
    scanf("%d", &Mes1);
printf("A: ");
    scanf("%d", &Ano1);

D1 = 1;
Ano1 = 1*365;
Mes1 = 1*30;

    diferença = (D + Mes + Ano) - (D1 + Mes1 + Ano1);
    printf("diferença em dias: ");
    printf("%d \n", diferença);





    return 0;
}