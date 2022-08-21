#include <stdio.h>
#include <stdlib.h>
/*. Faça um algoritmo que conte de 1 a 100 e a cada múltiplo de 10 emita a mensagem „Múltiplo de 10‟.*/
int main (){
    int i;
    for(i = 1;i<=100;i++){
        if((i%10)==0){
            printf("%d Multiplo de 10\n",i);
            
        }
    }


    return 0;
}