#include <stdio.h>
#include <stdlib.h>
#include<time.h>//biblioteca da função de randomizar
#define bandeira 9
#define bomba 0

int main(int argc, char *argv[]) {
	
	srand(time(NULL));//randomiza
	int campo[9][9];
	int casaX, casaY, i, j;
	
	//printf("rand = %d", (rand()%10));
	
	//limpa a matriz e insere 9 em todos as posições
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			campo[i][j] = 9;
		}
	}
	
	//preenche com bombas nosso jogo
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			if(rand()%10 == 0)//randomiza
			campo[i][j]=0; 
		}
	}
	
	printf("CAMPO MINADO \n ------------------------------------------------------------------------------\n");
	for(i=0; i<9; i++){
		printf("\t\t\t");// centraliza no terminal
		for(j=0; j<9; j++){
			if (campo[i][j]==0) printf("|9");
			else printf("|%d", campo[i][j]); //o caractere tem um "|" já que o número seguinte "completa" ele (|1|2), aí o "printf("|\n")" coloca um "|" no final quando passa para próxima linha
		}
		printf("|\n");
	}
	
	return 0;
}
