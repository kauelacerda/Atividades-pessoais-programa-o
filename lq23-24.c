#include <stdio.h>

int main (){
    /*23. Foi realizada uma pesquisa de algumas características 
    físicas da população de uma certa região, a qual coletou os
    seguintes dados referentes a cada habitante para serem 
    analisados:
    - sexo (masculino e feminino)
    - cor dos olhos (azuis, verdes ou castanhos)
    - cor dos cabelos ( louros, castanhos, pretos)
    - idade
    24. Faça um algoritmo que determine e escreva:
    - a maior idade dos habitantes
    - a quantidade de indivíduos do sexo feminino cuja idade
    está entre 18 e 35 anos inclusive e que tenham olhos verdes e 
    cabelos louros.
    O final do conjunto de habitantes é reconhecido pelo valor 
    -1 entrada como idade.*/

    int sexo, olho, cabe, idade, fun=0, maid=0, esp=0;
    
    while (fun==0)
    {
        printf("Qual a sua idade: ");
        scanf("\n%d", &idade);
        if (idade<0){break;}
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