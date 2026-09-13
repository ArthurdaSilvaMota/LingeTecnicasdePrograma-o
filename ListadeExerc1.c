#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//1)	
	int a, b;
	
	printf("Insira valor de A e B: ");
	scanf("%d %d", &a, &b);
	
	printf("%d %d", b, a);
	
//2)
	double valor, valorfinal; 
	int v;
	
	printf("Valor: ");
	scanf("%lf", &valor);
	
	v = valor/10;
	valorfinal = valor / 10;
	
	printf("%lf x 10 %d", valorfinal, v);
	
//3)
	int n, bit_64, bit_32, bit_16, bit_8, bit_4, bit_2, resultado;
	
	printf("Entre com o valor para a conversao: ");
	scanf("%d", &n);
	
	bit_64 = n%2;
	resultado = n/2;
	
	bit_32 = resultado%2;
	resultado = resultado/2;
	
	bit_16 = resultado%2;
	resultado = resultado/2;
	
	bit_8 = resultado%2;
	resultado = resultado/2;
	
	bit_4 = resultado%2;
	resultado = resultado/2;
	
	bit_2 = resultado%2;
	resultado = resultado/2;
	
	printf("O numero %d em binario = %d%d%d%d%d%d%d", n, resultado%2, bit_2, bit_4, bit_8, bit_16, bit_32,bit_64);
	
//4)
	float salario, venda, salariofinal, comicao;
	
	printf("Salario: ");
	scanf("%f", &salario);
	printf("Numero de vendas: ");
	scanf("%f", &venda);
	
	comicao = (venda * 15/100) * salario;
	salariofinal = salario + comicao;
	
	printf("O valor sera %f", salariofinal);
	
//5)
	int vala, valb, valc, vald;
	char soma, media, mult;
	
	printf("Valor de A, B, C e D: ");
	scanf("%d %d %d %d", &vala, &valb, &valc, &vald);
	
	soma = vala + valb + valc + vald;
	media = (vala + valb + valc + vald)/4;
	mult = vala * valb * valc * vald;
	
	printf("Seram %d, %d, %d", soma, media, mult);
	
//6)
	int dias, meses, anos;
	int diasf, mesesf, anosf;
	
	printf("Valor em dias: ");
	scanf("%d", &dias);
	
	diasf = dias % 30;
	meses = dias / 30;
	anos = meses / 12;
	mesesf = meses % 30;
	
	printf(" sera %d dias %d meses %d anos", diasf, mesesf, anos);
	
//7)
	float pi, r, r3, volume;
	
	printf("Valor do raio: ");
	scanf("%f", &r);
	
	r3 = r*r*r;
	pi = 3.14159;
	volume = 4/3*pi*r3;
	
	printf("O volume será %f", volume);
	

//8)
	int x1, x2, y1, y2, p1, p2;
   float dist;

   printf("Insira valor de p1: ");
   scanf("%d %d" , &x1, &y1);
   
   printf("Insira valor de p2: ");
   scanf("%d %d" , &x2, &y2);
   
   printf("Leitura: (%d,%d)", x1, y1);
   
   p1 = pow(x2-x1, 2); 
   p2 = pow(y2-y1, 2);
   
   dist = sqrt(p1+p2); 
   
   printf("Distancia (%f)", dist);
   


	return 0;
}
