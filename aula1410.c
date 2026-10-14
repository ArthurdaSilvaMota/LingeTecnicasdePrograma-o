#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que peça ao usuario para digitar 10 numeros que sejam
inteiros positivos, e ignore os negativos. E mostre na tela o resultado da soma
e a média desses valores
--OBS: não precisa usar vetor, usem os laços da aula de hoje while e do-while  */

int main(int argc, char *argv[]) {
	
	float soma, i, n;
	
	i=0;
	while(i<10){
		scanf("%f", &n);
		if(n>0){
			soma +=n;
			i++;
		}
	}
	printf("soma = %f e media = %f", soma, (soma/10));
	
	
	return 0;
}
