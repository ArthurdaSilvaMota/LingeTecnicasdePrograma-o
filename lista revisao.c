#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
//2)	
	char opcao;
	float c, f;
	printf("Escolha entre transformar C para F ou de F para C: (c ou f): ");
	scanf("%c", &opcao);
	
	switch(opcao){
		case 'c':
			printf("Insira o valor em C: ");
			scanf("%f", &c);
			
			f = (c * 9/5) + 32;
			
			printf("O valor em Fahrenheit sera %f", f);
			break;
			
		case 'f':
			printf("Insira o valor em F: ");
			scanf("%f", &f);
			
			c = (f - 32) * 5/9;
			
			printf("O valor em Celcius sera %f", c);
			break;
		default:
			printf("Opcao invalida");
	}
	
//3)
	float nota1, nota2, nota3, notafinal;
	char nome;
	
	printf("\ninsira nome do aluno: ");
	scanf("%c", &nome);
	
	printf("\nInsira a nota 1, a nota 2 e a nota 3 ");
	scanf("%f %f%f", &nota1, &nota2, &nota3);
	
	notafinal = (nota1 + nota2 + nota3)/3;
	
	if (notafinal >= 70 && notafinal <=100)
	{
		printf("Esta aprovado");
	}
	
	else if (notafinal<70 && notafinal>=40)
	{
		printf("Esta de recuperacao");
	}
	
	else{
		printf("Esta reprovado");
	}
	
	
	
	
	return 0;
}
