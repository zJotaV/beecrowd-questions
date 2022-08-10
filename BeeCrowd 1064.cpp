#include<stdio.h>

int main(){
	float x;
	int cont, i=0;
	float soma =0;
	
	for(cont=1; cont<=6; cont++){
		scanf("%f", &x);
		if(x>0){
			soma = soma + x;
			i++;
		}
	}
	printf("%d valores positivos\n", i);
	printf("%.1f\n", soma/i);
	return 0;
}
