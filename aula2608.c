#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c, r;
	
	printf("Entre com os valores para A B C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a>b){
		r = a;
	} 
	
	else {
		r = b;
	}
	
	if(c>r){
		r=c;
	}
	
	printf("%d eh o maior", r); 
	
	
	int valor, par, impar;
	
	printf("Insira um valor: ");
	scanf("%d", &valor);
	
	if (valor % 2 == 0) {
		printf("par");
	} 
	else{
		printf("impar");
	} 
	
	
	
	return 0;
}

//apenas um "=" significa "recebe", enquanto "==" significa "igual a"
