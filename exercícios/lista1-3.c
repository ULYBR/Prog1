#include <stdio.h>
#include <stdlib.h>
/*3. Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é par
ou ímpar, e se é positivo ou negativo.
*/


int main (){
   int num1;
    printf("digite um numero: ");
        scanf("%d",&num1);



if (num1>0 && (num1 %2)==0)
{

    printf("o numero e positivo\n");
    printf("o numero e par\n");
}
    else if (num1<0 && (num1 %2)!=0)
{

    printf("o numero e negativo\n");
    printf("o numero e impar\n");


}
    else if (num1<0 && (num1 %2)==0 )
{


    printf("o numero e negativo\n");
    printf("o numero e par\n");
}
    else if (num1>0 &&(num1%2)!=0)
{
    printf("o numero e positivo\n");
    printf("o numero e impar\n");

}
    
        else
     
 



    
    
    return 0;}