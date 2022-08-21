#include <stdio.h>
#include <stdlib.h>
/*Elabore dois algoritmos, um utilizando seleções compostas e outro utilizando seleções múltiplas) que
dada a idade de um nadador classifique-o em uma das seguintes categorias:
a. Infantil A = 5 a 7 anos
b. Infantil B = 8 a 11 anos
c. Juvenil A = 12 a 13 anos
d. Juvenil B = 14 a 17 anos
e. Adultos = Maiores de 18 anos*/
int main (){
     int idade;
    printf("Digite a idade do nadador:");
    scanf("%d",&idade);
    if(idade>=5 && idade<=7)
    {
        printf("Nadador:Infantil A\n");
    }
    else if(idade>=8 && idade<=11)
    {
        printf("Nadador:Infantil B\n");
    }
    else if(idade>=12 && idade<=13)
    {
        printf("Nadador:Juvenil A\n");
    }
    else if(idade>=14 && idade<=17)
    {
        printf("Nadador:Juvenil B\n");
    }
    else if(idade>=18){
        printf("Nadador:Adulto\n");
    }
    else{
        printf("Idade invalida\n");
    }
    return 0;
}
   