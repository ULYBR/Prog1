#include <stdio.h>
#include <stdlib.h>


/*Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é par
ou ímpar, e se é positivo ou negativo.
*/
int main (){
    int num;

    printf("digite um numero:");
        scanf("%d",&num);

    if(num>0 && (num%2)==0){
        printf("numero e positivo e par");
    }
    else if (num>0 && (num%2)!=0){
        printf("numero e positivo e impar");
     }
    else if (num<0 && (num%2)==0){
        printf("numero e negativo e par");
    }
    else if (num<0 && (num%2)!=0){
        printf("numero e negativo e impar");
    }else
        printf("valor invalido!");

   
     



    return 0;

}