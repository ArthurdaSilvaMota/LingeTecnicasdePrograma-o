#include <stdio.h>
#include <stdlib.h>


 
int main(int argc, char *argv[]) {
	
	int a, b, c, maior, maior_temp;
	
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d", &a, &b, &c);
	
	
	//conta
	  maior_temp = (a+b+abs(a-b))/2;
	  
	  maior = (maior_temp+c+abs(maior_temp-c))/2;
	
	printf("O maior entre |%d||%d||%d| = %d", a, b, c, maior); 



//com 4)
	int d, e, f, g, maiorf, maior_temp1, maior_temp2;
	
	printf("\nInforme os valores a serem comparados: ");
	scanf("%d %d %d %d", &d, &e, &f, &g);
	
	
	//conta
	//compara os dois primeiros
	  maior_temp1 = (d+e+abs(d-e))/2;
	//compara os dois ultimos
	  maior_temp2 = (f+g+abs(f-g))/2;
	 
	//compara os dois resultados  
	  maiorf = (maior_temp1 + maior_temp2 + abs(maior_temp1 - maior_temp2))/2;
	
	printf("O maior entre |%d||%d||%d||%d| = %d", d, e, f, g, maiorf);
	
	return 0;
}
	
