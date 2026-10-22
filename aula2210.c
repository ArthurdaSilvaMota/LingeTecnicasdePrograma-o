#include <stdio.h>
#include <stdlib.h>

/*faça um programa que leia uma palavra, 
e verifique se ela um palindromo

Entrada: ABBA
Saída: é um palindromo*/

int main(int argc, char *argv[]) {
	
	int i, j, palindromo;
	char palavra[30];
	
	scanf("%s", &palavra); //%s é para String
	printf("Inserido %s", palavra);
	
	printf("\n");
	
	for(i=0; i<30 && palavra[i]!='\0'; i++);
	//printf("\n tamanho da minha palavra %d", (i));
	
	for(j=i-1, i=0; i<j; i++, j--){
		if(palavra[i] == palavra[j])palindromo=1;
		else {
			palindromo=0;
			break;
			}
		
		}
	if(palindromo) printf("eh palindromo");
	else printf("nao eh palindromo");

	return 0;
}
