#include <stdio.h>
#include <stdlib.h>
/*O Botafogo deseja aumentar o salário de seus 22 jogadores. O reajuste deve seguir as seguintes regras:
SALÁRIO ATUAL (R$) AUMENTO
0,00 a 1.000,00 20%
1.000,01 a 5.000,00 10%
acima de 5.000,00 0%
Escreva um algoritmo que:
 leia o nome e o salário atual de cada jogador;
 exiba o nome, o salário atual e o salário reajustado de cada jogador;
 exiba o total da folha de salários do clube, antes do reajuste.
 exiba o total da folha de salários do clube, após o reajuste.
 exiba o percentual de reajuste sobre o total da folha de salários.*/
int main (){
    int i;

    float salario,rsalario,total,rtotal;

    char nome[21];
    

    for(i=0;i<=22;i++)
    {
        printf("digite o nome do jogador: \n");
            scanf("%s",&nome);
        printf("digite o salario: ");
            scanf("%f",&salario);
        if(salario<=1000)
        {
            rsalario = salario * 1.2;
            total = salario + total;
            rtotal = total * 1.2;
                printf("nome: %s\n",nome);
                printf("salario atual: %.2f\n",salario);        
                printf("o salario reajustado e: %.2f\n",rsalario);
                printf("o total reajustado e: %.2f\n",rtotal);
                printf("o percentual de reajuste e: 20\n");

        }
        else if(salario>=1000.01 && salario<=5000)
            {
             rsalario = salario * 1.1;
             total = salario + total;
             rtotal = total * 1.1;
            
                printf("nome: %s\n",nome);
                printf("salario atual: %.2f\n",salario); 
                printf("o salario reajustado e: %.2f\n",rsalario);
                printf("o total reajustado e: %.2f\n",rtotal);
                printf("o percentual de reajuste e: 10\n");
            }
        else if(salario>5000)
            {
            rsalario = 0 ;
            total = salario + total;
            rtotal = total / 0;
                printf("nome: %s\n",nome);
                printf("salario atual: %.2f\n",salario); 
                printf("o salario reajustado e: %f\n",rsalario);
                printf("o total reajustado e: %f\n",rtotal);
                printf("o percentual de reajuste e: 0\n");
            }
        


    }
        if(salario<1000.01 && salario<=5000){
            printf("os jogadores que receberam reajuste foram: %s\n",nome);
        }
        else if (salario>5000){
            printf("os jogadores que não teve reajuste: %s\n",nome);
        
        }
        printf("os jogadores que receberam : %s\n",nome);
        printf("o total da folha de salario e: %.2f\n",total);
        printf("folha de salario antes do reajuste: %.2f\n",total);
        printf("folha de salario apos o reajuste: %.2f\n",rtotal);

    


    return 0;
}