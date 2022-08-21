#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que determine o maior entre N números lidos. A condição de parada é a entrada de
um valor 0, ou seja, o algoritmo deve ficar calculando o maior até que a entrada seja igual a 0 (ZERO).*/
int main (){
    int n, maior = 0;
    do{
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n > maior){
            maior = n;
        }
    }while(n != 0);
    printf("O maior numero digitado foi: %d", maior);
    


    return 0;
}