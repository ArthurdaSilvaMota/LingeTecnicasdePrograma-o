#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//1)	
	int a, b, c, d, trocaCA, trocaAC, trocaDB, trocaBD;
	
	printf("Insira os valores de A, B, C e D: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	printf("%d %d %d %d", a, b, c, d);
	
	trocaCA=(c*a)/a;
	trocaAC=(a*c)/c;
	trocaDB=(d*b)/b;
	trocaBD=(b*d)/d;
	
	printf("\n%d %d %d %d", trocaCA, trocaAC, trocaDB, trocaBD);
	
//2)
	float p, vp, vpa, valoremp, qntdacoes, precoacao;
	
	printf("Valor patrimonial da empresa: R$ ");
	scanf("%f", &vp);
	printf("Quantidade de açoes: ");
	scanf("%f", &qntdacoes);
	printf("O preço atual das açoes: R$ ");
	scanf("%f", &precoacao);
	
	vpa = vp/qntdacoes;
	p = vp*(precoacao/vpa);
	
	if(p/vp<0.0){
		printf("Pessimo");
	}
	else if(0.0<=p/vp<0.8){
		printf("otimo");
	}
	else if(0.8<=p/vp<1.2){
		printf("indiferente");
	}
	else if(1.2<p/vp<2.0){
		printf("boa");
	}
	else {printf("ruins");
	}
	
	
	
	return 0;
}
