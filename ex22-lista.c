#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que possibilite calcular o peso total e o valor total a pagar de bovinos em uma
pesagem. O programa deve solicitar a entrada do valor da arroba, e o peso de cada animal que for para
a balança. Caso o usuário responda 0 (zero), o programa deve encerrar a entrada de dados e calcular o
peso total acumulado bem como o preço total à pagar. O preço a pagar é dado pela seguinte fórmula:
Preço Total = ((Peso Total/2) / 15) - Quantidade de Arrobas) * Preço Arroba;
Para calcular a Quantidade de Arrobas, basta utilizar a seguinte fórmula:
Quantidade de Arrobas = Preço Total = ((Peso Total/2) / 15);*/
int main (){
    int peso,cont=0,arroba,i;
    float preco,precoTotal;
    do
    {
        printf("digite o peso do boi: ");
            scanf("%d",&peso);
        printf("digite o preco da arroba: ");
            scanf("%d",&arroba);
        printf("digite o preco do boi: ");
            scanf("%f",&preco);
        cont = peso + cont;
        precoTotal = ((cont/2)/15) * preco;
        
    } while (peso != 0);
    printf("o peso total e: %dkg\n",cont);
    printf("o preco total e:R$ %.2f",precoTotal);
    printf("quantidade de arroba: %d",arroba);
   


    return 0;
}