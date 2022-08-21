#include <stdlib.h>
#include <stdio.h>
/*Desenvolva um algoritmo que:
a. Leia 4 números;
b. Calcule o quadrado de cada um;
c. Se o valor resultante do quadrado do terceiro for >= 1000, mostre-o e finalize;
d. Caso contrário, mostre os valores lidos e seus respectivos quadrados.*/

int main (){
    int num1,num2,num3,num4;
    int q1,q2,q3,q4;
   

    printf("digite o valor do numero 1 :");
        scanf("%d",&num1);
    printf("digite o valor do numero 2 :");
        scanf("%d",&num2);
    printf("digite o valor do numero 3 :");
        scanf("%d",&num3);
    printf("digite o valor do numero 4 :");
        scanf("%d",&num4);
    q1=num1*num1;
    q2=num2*num2;
    q3=num3*num3;
    q4=num4*num4;
    
    if(q3>=1000){
        
        
        printf("o valor resultante do quadrado 3 e maior que 1000:\n o quadrado de %d : %d",num3,q3);
        
    }
   else{
        printf("resultado do quadrado de %d: %d\n",num1,q1);
        printf("resultado do quadrado de %d: %d\n",num2,q2);
        printf("resultado do quadrado de %d: %d\n",num3,q3);
        printf("resultado do quadrado de %d: %d\n",num4,q4);
    }
   

    return 0;
}