#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo chamado Calculadora, onde o usuário fornece dois valores e o operador (um dentre
+, -, * e /), e o programa faz a conta*/
int main (){
    float val1, val2, res;
    char operador;
    
    
    printf("digite o primeiro numero :");
        scanf("%f",&val1);
    printf("digite o operador :");
        scanf(" %c",&operador);
    printf("digite o segundo numero :");
        scanf("%f",&val2);
    
    

    switch (operador){
    case '+':
        res = val1 + val2;
        printf("resultado :%.2f",res);
        break;
    case '-':
        res = val1 - val2;
        printf("resultado :%.2f",res);
        break;   
    case '*':
        res = val1 * val2;
        printf("resultado :%.2f",res);
       break;
    case '/':
        res = val1 / val2;
        printf("resultado :%.2f",res);
        break;
    default:
        printf("Operador invalido");  
        
    }
   

    return 0;
}