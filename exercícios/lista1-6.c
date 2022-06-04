#include <stdio.h>
#include <stdlib.h>
/*Elabore um algoritmo em pseudolinguagem (utilizando os conceitos vistos nesse capítulo) para ler uma
variável numérica N e mostrá-la somente se a mesma for maior que 100, caso contrário mostrá-la com o
valor zero.
*/
int main (){
     int num;
    
    printf("Digite um numero:");
    scanf("%d", &num);

    if (num>100){
        printf("Numero: %d\n", num);

    }
    else 
    {
        printf("Numero: 0\n");
    }
    return 0;}





