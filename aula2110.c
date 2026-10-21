#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

//ex:03	//10 == 1010
	int n, aux, mult=1;
	scanf("%d", &n);
	
	while(n>=1){//10>1
		aux=aux+(n%2)*mult;
		n=n/2;
		mult=mult*10;
	}
	printf("%d", aux);
	
	return 0;
}
