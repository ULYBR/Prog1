#include <stdio.h>
#include <stdlib.h>
/*Elabore um algoritmo em pseudolinguagem (utilizando os conceitos vistos nesse capítulo) para ler um
número e verificar se ele é par ou ímpar. Quando for par armazenar esse valor em P e quando for ímpar
armazená-lo em I. Exibir P e I no final do processamento.
*/
int main (){
    int num, par, impar;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if (num%2==0){
        par=num;
        impar=0;
        printf("o numero e: P\n ");
    }
    else{
        par=0;
        impar=num;
        printf("o numero e: I\n ");
        
    } 
      
    
    
    
    
    
    
    
    
    
    
    
    return 0;}