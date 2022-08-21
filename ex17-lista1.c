#include <stdio.h>
#include <stdlib.h>
/*Dado o trecho de programa abaixo:
...
leia (N)
R <1;
I <2;
enquanto I <= N-1 faça
R < R * 2;
I < I + 1;
fim-enquanto;
escreva (R);
...
Reescreva-o utilizando:
a) o comando para.
b) o comando repita ... até.*/
int main (){
    int n, i, r;
    r = 1;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);
    for (i = 1; i <= n-1; i++){
        r = r * 2;
    }
    printf("O resultado e %d\n", r);
    
    /*com While */
    int num, res, cont;
    res = 1;
    cont = 1;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);
    
    while (cont <= num-1){
        res = res * 2;
        cont++;
    }
    printf("O resultado e %d\n", res);
    
    /*com Do While */
    int numero, resultado, contador;
    resultado = 1;
    contador = 1;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);
    
    do{
        resultado = resultado * 2;
        contador++;
    }while (contador <= numero-1);
    printf("O resultado e %d\n", resultado);
    
    return 0;
}