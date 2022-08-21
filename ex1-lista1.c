#include<stdio.h>
/*Elabore um algoritmo que leia o CPF e o número de horas trabalhadas de um operário. Calcule o salário
sabendo-se que ele ganha R$ 10,00 por hora. Quando o número de horas exceder a 50, calcule o
excesso de pagamento armazenando-o em outra variável, caso contrário zerar tal variável. A hora
excedente de trabalho vale R$ 20,00. No final do processamento mostre o salário total e o salário
excedente do trabalhador.*/

int main (){
    int cpf,horas;
    float salario,exsalario;

    printf("digite seu cpf: \n");
    scanf("%d",&cpf);
    printf("digite quantas horas voce trabalhou: \n");
    scanf("%d",&horas);
  
  if(horas<50 && horas>=0){
    salario = 10*horas;
    exsalario = 0;

  }
  else 
  {
  salario= 10 * horas;
  exsalario= 20 * horas;
  }
  


    printf("o salario total do trabalho sera :$%.2f\n",salario + exsalario);
    printf("o excedente do tralhador foi :$%.2f\n",exsalario - salario);



    return 0;
}