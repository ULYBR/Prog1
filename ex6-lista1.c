#include <stdio.h>
#include <stdlib.h>
/*Elabore um algoritmo em pseudolinguagem (utilizando os conceitos vistos nesse capítulo) para ler uma
variável numérica N e mostrá-la somente se a mesma for maior que 100, caso contrário mostrá-la com o
valor zero.
*/
int main (){
    int n;
    printf("digite um numero:");
        scanf("%d",&n);
    if(n>100){
        printf(" maior que 100 \n");
        
    }else {
        printf(" menor que 100 \n");
        n=0;
        
    }
    printf(" valor do numero digitado: %d",n);


    return 0;
}