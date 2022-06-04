# include <stdio.h>
# include <stdlib.h>


int main(){
    /*Desenvolva um algoritmo que:
a. Leia 4 números;
b. Calcule o quadrado de cada um;
c. Se o valor resultante do quadrado do terceiro for >= 1000, mostre-o e finalize;
d. Caso contrário, mostre os valores lidos e seus respectivos quadrados.
*/

int num1,num2,num3,num4;
int quad1,quad2,quad3,quad4;
  
  printf("digite primeiro numero:\n");
    scanf("%d",&num1);
  printf("digite segundo numero:\n");
    scanf("%d",&num2); 
  printf("digite terceiro numero:\n");
    scanf("%d",&num3);
  printf("digite quarto numero:\n");
    scanf("%d",&num4);
 
 quad1=num1*num1;
 quad2=num2*num2;
 quad3=num3*num3;
 quad4=num4*num4;

 if(quad3>=1000){
     printf("numero 3 e maior ou igual a 1000\n");
     printf("logo o quadrado dele:%d",quad3);
 }
 else
  {
  printf("o primeiro numero:%d\n",num1);
  printf("quadrado do primeiro numero:%d\n",quad1);
  printf("o segundo numero:%d\n",num2);
  printf("quadrado do segundo numero:%d\n",quad2);
  printf("o terceiro numero:%d\n",num3);
  printf("quadrado do terceiro numero:%d\n",quad3);
  printf("o quarto numero:%d\n",num4);
  printf("quadrado do  quarto numero:%d\n",quad4);
  
  }


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;}