#include <stdio.h>
#include <stdlib.h>

/*A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3 grupos de indústrias que são
altamente poluentes do meio ambiente. O índice de poluição aceitável varia de 0.05 até 0.25. Se o
índice sobe para 0.3 as indústrias do 1º grupo são intimadas a suspenderem suas atividades, se o índice
crescer para 0.4 as industrias do 1º e 2º grupo são intimadas a suspenderem suas atividades, se o
índice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades. Faça um
algoritmo que leia o índice de poluição medido e emita a notificação adequada aos diferentes grupos de
empresas.*/

int main(){
    float indice;
    printf("digite o indice de poluicao:\n");
    scanf("%f",&indice);
    if(indice<0.3){
        printf("nenhuma empresa sera notificada\n"); 
    }else if(indice>=0.3 && indice<0.4){
        printf("as empresas do grupo 1 serao notificadas\n");
    }else if(indice>=0.4 && indice<0.5){
        printf("as empresas do grupo 1 e 2 serao notificadas\n");
    }else if(indice>=0.5 ){
        printf("as empresas do grupo 1, 2 e 3 serao notificadas\n");
    }
     else 
        printf("indice invalido\n");
    
    return 0;
     

    
}