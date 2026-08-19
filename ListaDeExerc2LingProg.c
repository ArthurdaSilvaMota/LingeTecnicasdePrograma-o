#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//1)
  int idade, anoatual, nascimento;
  
  printf("Insira sua idade: ");
  scanf("%d", &idade);
  anoatual = 2026;
  
  nascimento = anoatual - idade;
  
  printf("Ano de nascimento será %d = %d", idade, nascimento);


//2)
  float ms, km, valor;

  printf("\nInsira o valor: ");
  scanf("%f", &km);
  
  
  ms = km / 36;

  printf("Valor em metros por segundo = %f", ms);


//3)
  float real, dolar, conversao;

  printf("\nValor em reais: ");
  scanf("%f", &real);

  dolar = 5.20;
  conversao = real / dolar;

  printf("Conversao para dolar ficara %f", conversao);


//4)
  float c, f;

  printf("\nInsira uma temperatura em Celcius: ");
  scanf("%f", &c);

  f = c * (9.0 / 5.0) + 32;

  printf("Conversao em Fahrenheit %f = %f", f);

//5)
  float ang, radi, p;

  printf("\nInsira quantos graus de um angulo: ");
  scanf("%f", &ang);

  p = 3.141592;
  radi = ang * (p / 180);
  
  printf("Conversao em Radianos %f = %f", radi);
  
//6)
  int v, antecessor, sucessor;
  
  printf("\nInsira um valor: ");
  scanf ("%d", &v);
  
  antecessor = v - 1;
  sucessor = v + 1;
  
  printf("Seu sucessor sera %d e seu antecessor sera %d", sucessor, antecessor);
  
//7)
  float dinheiro, pri, seg, ter;
  
  dinheiro = 780,000.00;
  pri = (dinheiro / 100) * 46;
  seg = (dinheiro / 100) * 32;
  ter = (dinheiro / 100) * 22;
  
  printf("\nO primeiro recebera %f, o segundo recebera %f e o terceiro recebera %f", pri, seg, ter);
  
//8)
  int evento, hora, minuto, restom, segundo;
  
  printf("\nInsira o tempo do evento: ");
  scanf("%d", &evento);
  
  segundo = evento  % 60;
  minuto = evento / 60;
  restom = minuto % 60; 
  hora = minuto / 60;
  
  printf("O evento sera as %d %d %d", hora, restom, segundo);
  
//9)
  float distancia, tempo, velocidade, combustivel;
  
  printf ("\nInsira a distancia: ");
  scanf("%f", &distancia);
  printf("\nInsira o tempo percorrido: ");
  scanf("%f", &tempo);
  
  velocidade = distancia / tempo;
  combustivel = velocidade / 12;
  
  printf("\nA quantidade de combustivel necessario sera de %f litro", combustivel);
  
//10)
  int a, b, d, maiorab, maiorad, maiorbd;
  
  printf("\nValor de a: ");
  scanf("%d", &a);
  printf("\nValor de b: ");
  scanf("%d", &b);
  printf("\nValor de d: ");
  scanf("%d", &d);
  
  maiorab = (a + b + abs(a - b)) / 2;
  maiorad = (a + d + abs(a - d)) / 2;
  maiorbd = (b + d + abs(b - d)) / 2;
  
  printf("\n Entre a e b, o maior eh %d. Entre a e d, o maior eh %d. Entre b e d, o maior eh %d", maiorab, maiorad, maiorbd);
  
  
  
  
  
	return 0;
}
