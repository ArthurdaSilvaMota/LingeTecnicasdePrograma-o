#include <stdio.h>
#include <stdlib.h>

float calc_inss(float salario){
	if(salario<=1412.00)return salario*0.075;
	else if(salario<=2666.68)return salario*0.09;
	else if(salario<=4000.00)return salario*0.12;
	else return salario*0.14;
}

float calc_irpf(float salario_base){
	
	
	if(salario_base<=2259.20)return 0;
	else if(salario_base<=2826.65)return (salario_base*0.075) - 169.44; 
	else if(salario_base<=3751.05)return (salario_base*0.15) - 381.44;
	else if(salario_base<=4664.68)return (salario_base*0.225) - 662.77;
	else return (salario_base*0.275) - 896.00; 
}


int main(int argc, char *argv[]) {
	
	float salario, desconto, salario_base, descontoirpf, valorhora, horasmes, salario_liquido;
	printf("Insira o valor da hora trabalhada");
	scanf("%f", &valorhora);
	printf("\n Insira a carga horaria mensal");
	scanf("%f", &horasmes);
	
	salario = valorhora*horasmes;
	//scanf("%f", &salario);
	
	desconto = calc_inss(salario);
	//printf("%f", desconto);
	
	salario_base=salario-desconto;
	
	//printf("\n%f", calc_irpf(salario_base));
	
	

	salario_liquido= salario - (calc_inss(salario) + calc_irpf(salario_base));
	
	printf("salario bruto: %f\n INSS: %f\n irpf: %f\n salario liquido: %f", salario, calc_inss(salario), calc_irpf(salario_base), salario_liquido);

		
	return 0;
}
