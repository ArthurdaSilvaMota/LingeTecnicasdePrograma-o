#include <stdio.h>
#include <stdlib.h>

/*
tipo nome (lista de parametros){
	comandos
	comandos...
}
*/
void exec3 (){
	float tempC, tempF;
		printf("Insira a temperatura em c: \n");
		scanf("%f", &tempC);
		tempF = tempF * (9.0/5.0) + 32.0;
		printf("Os %f c° sao %f F \n", tempC, tempF);
	
}
void exec2(){
	float reais, cota;
		printf("Insira a cotação e o valor: \n");
		scanf("%f %f", &cota, &reais);
		printf("Os %f reais sao %f dolares \n", reais, (reais/cota));
}
void exec8(){
	int sec, horas, min;
		printf("Insira o tempo em segundos \n");
		scanf("%d", &sec);
		horas = sec/3600;
		min = (sec - (sec%3600))/60;
		sec = sec -((horas*3600)+(min*60));
		printf("%d:%d:%d", horas, min, sec);
}

int main(int argc, char *argv[]) {
	
	int op;
	printf("Insira qual exercicio ira resolver: [2|3|8]\n");
	scanf("%d", &op);
	
	switch(op){
		
	case 2:
		exec2();
		/*float reais, cota;
		printf("Insira a cotação e o valor: \n");
		scanf("%f %f", &cota, &reais);
		tempF = tempF * (9.0/5.0) + 32.0;
		printf("Os %f reais sao %f dolares \n", reais, (reais/cota));*/
	break;
		
	case 3:
		exec3();
		/*float tempC, tempF;
		printf("Insira a temperatura em c: \n");
		scanf("%f", &tempC);
		tempF = tempF * (9.0/5.0) + 32.0;
		printf("Os %f c° sao %f F \n", tempC, tempF);*/
	break;
	
	case 8:
		exec8();
		/*int sec, horas, min;
		printf("Insira o tempo em segundos \n");
		scanf("%d", &sec);
		horas = sec/3600;
		min = (sec - (sec%3600))/60;
		sec = sec -((horas*3600)+(min*60));
		printf("%d:%d:%d", horas, min, sec);*/
	break;
	
    }
	
	return 0;
}
