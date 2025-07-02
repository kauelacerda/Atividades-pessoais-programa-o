#include <stdio.h>

int main (){
    /*4. Chico tem 1,50 metro e cresce 2 centímetros por ano, 
    enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano.
    Construa um algoritmo que calcule e imprima quantos anos
    serão necessários para que Zé seja maior que Chico.*/

    int ch=150, ck=2, zh=110, zk=3, an=0;
    while(ch>=zh){
        ch+=ck;
        zh+=zk;
        an++;
    }
    printf("Zé passa de Chico com %d e %d", zh, ch);
    printf("\nserão necessarios %d", an);

    return 0;
}