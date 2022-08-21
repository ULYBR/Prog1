#include <stdio.h>
#include <stdlib.h>

/*Elabore um algoritmo em pseudolinguagem (utilizando os conceitos vistos nesse capítulo) para ler um
número e verificar se ele é par ou ímpar. Quando for par armazenar esse valor em P e quando for ímpar
armazená-lo em I. Exibir P e I no final do processamento.*/
int main (){
    int num;
    int p,i;
    printf("digite um numero:");
        scanf("%d",&num);
    if(num % 2 == 0){
        p=num;
        printf("o numero %d e :P",p);        
    }else if(num % 2 != 0){
        i=num;
    printf("o numero %d e :I",i);
    }

    return 0;
}