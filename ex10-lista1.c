#include <stdio.h>
#include <stdlib.h>
/*Elabore um algoritmo que gera e escreve os números ímpares entre 100 e 200.*/
int main (){
    
    for(int i =100;i<=200;i++){
        if((i%2)!=0){
            printf("-\n");
            printf("%d\n",i);
            
        }
    } 
       


    return 0;
}