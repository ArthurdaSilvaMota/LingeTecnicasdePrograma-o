#include <stdio.h>
#include <stdlib.h>

	void exerca1 (){
		int capacidade, qtd_itens, n_mochilas, resto;
    
    				printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    				scanf("%d",&qtd_itens);
    				printf("Insira a capacidade de itens de cada mochila: \n");
    				scanf("%d",&capacidade);
    
    				n_mochilas = qtd_itens/capacidade; 
    
    				printf("Legendario, são %d mochilas para seus itens", n_mochilas);	
	}
	
	void exerca0(){
		int a, b, c, d;
		
		printf("Insira valores para A, B, C e D: ");
		scanf("%d %d %d %d", &a, &b, &c, &d);
		
		if (a%2==1){
			printf("\nA eh impar");
		}
		if (a%5==0){
			printf("\nA eh multiplo de 5");
		}
		if (b%2==1){
			printf("\nB eh impar");
		}
		if (b%5==0){
			printf("\nB eh multiplo de 5");
		}
		if (c%2==1){
			printf("\nC eh impar");
		}
		if (c%5==0){
			printf("\nC eh multiplo de 5");
		}
		if (d%2==1){
			printf("\nD eh impar");
		}
		if (d%5==0){
			printf("\nD eh multiplo de 5");
		}
	}
	void exerca2(){
		float cel, fah, kel, me, mi, kg, li, mph, km;
		int op;
			
			printf("Selecione a conversão(1, 2, 3, 4, 5, 8, 9, 10, 11): ");
			scanf("%d", &op);
			
			switch(op){
				case 1:
					printf("Insira valor em Celcius: ");
					scanf("%f", %cel);
					
					fah = cel*1.8+32;
					kel = cel+273.15;
					
					printf("Sera %f fahrenheit e %f kelvin", fah, kel);
				break;
				
				case 2:
					printf("Insira valor em Fahrenheit: ");
					scanf("%f", %fah);
					
					cel = (fah-32)/1.8;
					kel = cel+273.15;
					
					printf("Sera %f celcius e %f kelvin", cel, kel);
				break;
				
				case 3:
					printf("Insira valor em Kelvin: ");
					scanf("%f", %cel);
					
					cel = kel-273.15;
					fah = cel*1.8+32;
					
					printf("Sera %f celcius e %f fahrenheit", cel, fah);
				break;
				
				case 4:
					printf("Insira valor em metros: ");
					scanf("%f",&me);
					
					mi = me/1609.34;
					
					printf("Sera %f milhas", mi);
				break;
					
				case 5:
					printf("Insira valor em milhas: ");
					scanf("%f",&mi);
					
					me = mi*1609.34;
					
					printf("Sera %f metros", me);
				break;
				
				case 8:
					printf("Insira valor em quilogramas: ");
					scanf("%f",&kg);
					
					li=kg*2.205;
					
					printf("Sera %f libras", li);
				break;
				
				case 9:
					printf("Insira valor em libras: ");
					scanf("%f",&li);
					
					kg=li/2.205;
					
					printf("Sera %f quilogramas", kg);
				break;
				
				case 10:
					printf("Insira valor em metro por hora: ");
					scanf("%f",&mph);
					
					km=mph*1.609;
					
					printf("");
				break;
				
				case 11:
					printf("Insira valor em kilometros por hora: ");
					scanf("%f",&km);
					
					mph=km/1.609;
					
					printf("Sera %f metros por hora", mph);
				break;
					
					
				
			}
			
		}
	}

	void exercb0(){
		
		int capacidade, qtd_itens, n_mochilas, resto;
    
    				printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    				scanf("%d",&qtd_itens);
    				printf("Insira a capacidade de itens de cada mochila: \n");
    				scanf("%d",&capacidade);
    
    				n_mochilas = qtd_itens/capacidade;
    				resto = qtd_itens%capacidade; 
    
    				printf("Legendario, são %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
		
	}

	
	void exercb1(){
	
	int a, b, c;
	
	printf("Insira valores para A, B e C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a==b || b==c || a==c){
		printf("Os valores nao podem ser iguais!");
	}
	if 
}

	void exercb2(){
	
		int a, c;
		char b;
		
		printf("Insira dois valores e um sinal de operacao: ");
		scanf("%d %d %d", a, b, c);
		
		switch(b){
			case '>':
				if (a>b){
					printf("Verdadeiro");
				}
				else:
					printf("Falso");
			break;
			
			case '<':
				if (a<b){
					printf("Verdadeiro");
				}
				else:
					printf("Falso");
			break;
			
			case '==':
				if (a==b){
					printf("Verdadeiro");
				}
				else:
					printf("Falso");
			break;
			
			case '!=':
				if (a!=b){
					printf("Verdadeiro");
				}
				else:
					printf("Falso");
			break;
		}
	}
	
	
	
	



int main(int argc, char *argv[]) {
	
	char prova;
	int questao;
	
	printf("Insira a prova(a, b ou c): ");
	scanf("%c", &prova);
	
	switch(prova){
		case 'a':
			
			printf("\nprova ESOFT M A");
			
			printf("Qual questao(0, 1 ou 2): ");
			scanf("%d", &questao);
			
			switch(questao){
				
				case 0:
					exerca0 ();
				break;
				
				case 1:
					exerca1 ();
				break;
				
				case 2:
					exerca2();
				break;
				
			}
			
			
		break;
		
		case 'b':
			printf("\nprova ESOFT M B");
			
			printf("Qual questao: ");
			scanf("%d", &questao);
			
			switch(questao){
				case 0:
					exercb0();
				break;
					
				
				
			}
	}
	
	return 0;
}
