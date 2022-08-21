#include <stdio.h>
#include <stdlib.h>
/*Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O monge,
necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com grãos de trigo
dispostos em um tabuleiro de xadrez (tem 64 quadros), de tal forma que o primeiro quadro deveria
conter apenas um grão e os quadros subseqüentes, o dobro do quadro anterior. A rainha achou o
trabalho barato e pediu que o serviço fosse executado, sem se dar conta de que seria impossível efetuar
o pagamento. Faça um algoritmo para calcular o número de grãos que o monge esperava receber. */
int main()
{
int i, n, soma;
soma = 0;
n = 64;
for (i = 1; i <= n; i++)
{
soma = soma + i;
}
printf("O monge esperava receber %d grãos de trigo", soma);
return 0;
}



