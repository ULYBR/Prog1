#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia o número de andares de um prédio e, a seguir, para cada andar do
prédio, leia o número de pessoas que entraram e saíram do elevador. Considere que o elevador está
vazio e está subindo, os dados se referem a apenas uma subida do elevador e que o número de pessoas
dentro do elevador será sempre maior ou igual a zero. Se o número de pessoas, após a entrada e saída,
for maior que 15, deve ser mostrada a mensagem “Excesso de passageiros. Devem sair X”, sendo X o
número de pessoas que devem sair do elevador, de modo que seja obedecido o limite de 15
passageiros. Após a entrada e saída no último andar, o programa deve mostrar quantas pessoas
permaneceram no elevador para descer.
*/
int main (){
int andares, entrada, saida, pessoas, i;
pessoas = 0;
printf("Digite o numero de andares: ");
scanf("%d", &andares);
for(i=0; i<andares; i++){
printf("Digite o numero de pessoas que entraram: ");
scanf("%d", &entrada);
printf("Digite o numero de pessoas que sairam: ");
scanf("%d", &saida);
pessoas = pessoas + entrada - saida;
if(pessoas > 15){
printf("Excesso de passageiros. Devem sair %d\n", pessoas-15);
}
}
printf("Pessoas que permaneceram no elevador para descer: %d", pessoas);
 


    return 0;
}