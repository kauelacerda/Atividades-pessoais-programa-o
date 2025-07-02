#include <stdio.h>

int main (){
    /*46. Foi realizada uma pesquisa de algumas 
    características físicas da população de um 
    certa região. Foram entrevistadas 500 
    pessoas e coletados os seguintes dados:
    a- sexo: M (masculino) e F (feminino)
    b- cor dos olhos: A (azuis), V (verdes) e C (castanhos)
    c- cor dos cabelos: L (louros), C (castanhos) e P (pretos)
    d- idade
    Deseja-se saber:
    a maior idade do grupo
    a quantidade de indivíduos do sexo feminino, cuja idade está entre 18 e 35 anos e que tenham olhos verdes
    e cabelos louros.*/

    int sexo, olho, cabe, idade, fun=0, maid=0, esp=0;
    
    while (fun<500)
    {
        printf("Qual a sua idade: ");
        scanf("\n%d", &idade);
        printf("Qual a cor do seu olho: \n1-Azul\n2-Verde\n3-Castanho ");
        scanf("%d", &olho);
        printf("Qual a cor do seu calelo: \n1-Loiro\n2-Castanho\n3-Preto ");
        scanf("%d", &cabe);
        printf("Qual o seu sexo:\n1-Masculino\n2-Feminino ");
        scanf("%d", &sexo);

        maid = maid>idade?maid:idade;
        if (sexo==2 && idade>18 && idade<=35 && olho==2 && cabe==1){esp++;}
    }
    printf("A maior idade foi: %d", maid);
    printf("\nA quantidade de pessoas especificas foram: %d", esp);

    return 0;
}