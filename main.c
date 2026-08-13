#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
    float area, raio, r2;
    
    printf("Insira o raio do circulo ");
    scanf("%f", &raio);
    
	r2 = raio*raio;
	//raio *= raio; esse é um outro jeito de fazer "raio vezes raio" 
	area = pi*r2;
	
	printf("A Area do circulo de raio %f = %f", raio, area);
	
	
	
	printf("Agora a do trapezio ");
	
	float basemaior, basemenor, h;
	
	printf("insira a base maior ");
	scanf("%f", &basemaior);
	
	printf("insira a base menor ");
	scanf("%f", &basemenor);
	
	printf("insira altura ");
	scanf("%f", &h);
	
	area = (basemaior + basemenor)*h /2;
	printf("A area do trapezio %f = %f", area);
	
	return 0;
}
