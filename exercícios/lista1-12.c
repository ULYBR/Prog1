#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Construa um algoritmo que leia 500 valores inteiros e positivos e:
a. Encontre o maior valor
b. Encontre o menor valor
c. Calcule a média dos números lidos
*/

int main () {
    int i, maior, menor, soma, media;
    int numero[4];
    for (i = 0; i < 500; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
    }
    maior = numero[0];
    menor = numero[0];
    soma = 0;
    for (i = 0; i < 500; i++) {
        if (numero[i] > maior) {
            maior = numero[i];
        }
        if (numero[i] < menor) {
            menor = numero[i];
        }
        soma = soma + numero[i];
    }
    media = soma / 500;
    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);
    printf("A media dos numeros eh: %d\n", media);
    return 0;
}

