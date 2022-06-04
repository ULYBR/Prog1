# include <stdio.h>
# include <stdlib.h>
/*Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu
peso ideal, utilizando as seguintes fórmulas:
a. Para homens: (72.7*ALTURA) - 58
b. Para mulheres: (62.1*ALTURA) - 44.7
*/
int main (){
    float altura,peso;
    char sexo;
    printf("Digite o sexo m para masculino e f para feminino:");
        scanf(" %c", &sexo);
    printf("Digite a altura:");
        scanf("%f", &altura);
    printf("digite seu peso:");
        scanf("%f", &peso); 
    if (sexo=='m'&& peso <=(72.7*altura)-58){
        printf("Peso ideal: %.2f\n", peso);

    }
    else if (sexo=='f'&& peso <=(62.1*altura)-44.7){
        printf("Peso ideal: %.2f\n", peso);
    }
    else{
        printf("seu peso :%.2f\n", peso);
        printf("Peso ideal: %.2f\n", (72.7*altura)-58);
        
    }



    return 0;
}