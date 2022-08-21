#include <stdio.h>
#include <stdlib.h>
/*Faça três algoritmos que leiam um valor N (inteiro), e calcule o fatorial de N. Um com repetição
incondicional (para), e dois com condicional, do tipo 1 (enquanto ... faça) e 2 (repita ... até).*/

int main (){
    int n, i, fatorial;
    fatorial = 1;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        fatorial = fatorial * i;
    }
    printf("O fatorial de %d e %d\n", n, fatorial);
     
     
     /*com While */
    int num,fat,cont;
    fat = 1;
    cont = 1;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);
   
    while (cont <= num){
        fat = fat * cont;
        cont++;
    }
    printf("O fatorial de %d e %d\n", num, fat);
   
   
    /*com Do While */

    int numero, fator, contador;
    fator = 1;
    contador = 1;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);
    
    do{
        fator = fator * contador;
        contador++;
    }while (contador <= numero);
    printf("O fatorial de %d e %d\n", numero, fator);


    
    
    
   
    
   



    return 0;
}