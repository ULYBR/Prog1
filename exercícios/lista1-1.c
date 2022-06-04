# include <stdio.h>
# include <stdlib.h>
/*Elabore um algoritmo que leia o CPF e o número de horas trabalhadas de um operário. Calcule o salário
sabendo-se que ele ganha R$ 10,00 por hora. Quando o número de horas exceder a 50, calcule o
excesso de pagamento armazenando-o em outra variável, caso contrário zerar tal variável. A hora
excedente de trabalho vale R$ 20,00. No final do processamento mostre o salário total e o salário
excedente do trabalhador.
*/
int main () {
   char cpf[14];
    int  horas;
    float salario , salarioex;

    printf("digite seu cpf:\n");
    scanf("%s",&cpf);
    
    printf("digite as horas trabalhas:\n");
    scanf("%d",&horas);

    if(horas<=50 && horas>0){
        salario=horas * 10;
        salarioex=0;  
    }
    else 
        {
            salario=horas * 20;
            salarioex=salario/2;
            
        }
        printf("salario total :%.2f\n",salario);
        printf("salario exedente:%.2f\n",salarioex);









    
    
    
    
    
    
    return 0;
    }
