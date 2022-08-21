#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que possibilite calcular a área total em metros de uma residência com os cômodos
sala, cozinha, banheiro, dois quartos, área de serviço, quintal, garagem, entre outros que podem ser
fornecidos ao programa. O programa deve solicitar a entrada do nome, da largura e do comprimento de
um determinado cômodo. Em seguida, deve apresentar a área do cômodo lido e também uma
mensagem solicitando ao usuário a confirmação de continuar calculando novos cômodos. Caso o usuário
responda “NÃO” o programa deve apresentar o valor total acumulado da área residencial.
*/
int main (){
   int comodo =0,largura,comprimento,area,cont=0;
    char nome[21],resp;
    do
    {
        printf("digite o nome do comodo: ");
            scanf("%s",&nome);
        printf("digite a largura do comodo: ");
            scanf("%d",&largura);
        printf("digite o comprimento do comodo: ");
            scanf("%d",&comprimento);
        
    
        area = largura * comprimento;
        
        
        printf("a area do comodo e: %dm²\n",area);

        printf("digite n para continuar ou s para sair: ");
            scanf("%s",&resp);

        
        cont = area + cont;
        comodo ++;
    } while (resp == 'n');
    printf("a area total e: %dm²\n",cont);
    printf("total de comodo digita:%d",comodo);
    
    



    return 0;
}