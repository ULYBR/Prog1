#include <stdio.h>
#include <stdlib.h>
/*Elabore um algoritmo que verifique se um número positivo lido é primo ou não. Faça um teste de mesa
do algoritmo*/

int main (){
    int i,numero,cont=0;
    printf("digite um numero: ");
        scanf("%d",&numero);
    for(i=1;i<=numero;i++)
    {
        if(numero%i==0)
        {
            cont++;
        }
    }
    if(cont==2)
    {
        printf("o numero e primo");
    }
    else
    {
        printf("o numero nao e primo");
    }
    


    return 0;
}