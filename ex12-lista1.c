#include <stdio.h>
#include <stdlib.h>
/*Construa um algoritmo que leia 500 valores inteiros e positivos e:
a. Encontre o maior valor
b. Encontre o menor valor
c. Calcule a média dos números lidos*/
int main (){
    int numero,maior,menor,soma,i;
    float media;
    maior=0;
    menor=0;

    
    for(i = 1 ;i<=500;i++){
        printf("\n%d\n",i);
        if(i>1)
        {
            maior=i;
        }
        else if(i<=500)
        {
             menor=i;
        }
       
       
        soma += i;
        media = soma/500;
    }
    printf("media :%.2f\n",media);
    printf("maior :%d\n",maior);
    printf("menor :%d\n",menor);
    


    return 0;
}