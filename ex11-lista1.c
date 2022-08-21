#include <stdio.h>
#include <stdlib.h>
    /*Escreva um programa que determine o grau de obesidade de uma pessoa, sendo fornecido o peso e a
altura da pessoa. O grau de obesidade é determinado pelo índice da massa corpórea - IMC (Massa =
Peso/Altura2
) através dos seguintes índices:
a. Abaixo de 19.9: Você está abaixo do peso ideal.
b. Entre 20.0 e 24.9: Parabéns! você está em seu peso normal!
c. Entre 25.0 e 29.9: Você está acima de seu peso (sobrepeso).
d. Entre 30.0 e 34.9: Obesidade moderada (grau I).
e. Entre 35.0 e 39.9: Obesidade severa (grau II).
f. 40.0 e acima: Obesidade mórbida (grau III).*/

int main (){
    float peso,altura;
    float imc;
    printf("digite sua altura:");
        scanf("%f",&altura);
    printf("digite seu peso:");
        scanf("%f",&peso);
    
    imc = peso / (altura*altura);
    if(imc<19.9)
    {
        printf("valor do seu imc: %.1f\nVoce esta abaixo do peso ideal.",imc);
    }
    else if(imc>19.9 && imc<24.9)
    {
        printf("valor do seu imc: %.1f \nParabens! voce esta em seu peso normal!",imc);
    }
    else if (imc>24.9 && imc<29.9)
    {
        printf("valor do seu imc: %.1f \nVoce esta acima de seu peso (sobrepeso).",imc);
    }
    else if (imc>29.9 && imc<34.9)
    {
        printf("valor do seu imc: %.1f \n Obesidade moderada (grau I).",imc);
    }
    else if (imc>34.9 && imc<39.9)
    {
        printf("valor do seu imc: %.1f \n Obesidade severa (grau II).",imc);
    }
    else 
        printf("valor do seu imc: %.1f \n Obesidade morbida (grau III).",imc);





    return 0;
}