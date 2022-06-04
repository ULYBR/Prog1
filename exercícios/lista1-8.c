#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo chamado Calculadora, onde o usuário fornece dois valores e o operador (um dentre
+, -, * e /), e o programa faz a conta.
*/

int main (){
    float valor1, valor2, resultado;
    char operador;
    printf("Digite o primeiro valor:");
        scanf("%f", &valor1);
    printf("Digite o segundo valor:");
        scanf("%f", &valor2);
    printf("Digite o Operador:");
        scanf(" %c", &operador);
    switch(operador){
        case '+':
            resultado = valor1 +valor2;
            printf("%.2f\n", resultado);
            break;
        case '-':   
            resultado = valor1 - valor2;
            printf("%.2f\n", resultado);
            break;
        case '*':
            resultado = valor1 * valor2;
            printf("%.2f\n", resultado);
            break; 
        case '/':   
            resultado = valor1 / valor2;
            printf("%.2f\n", resultado);
            break;
            default:
            printf("Operador inválido");           
    }



    return 0;
}