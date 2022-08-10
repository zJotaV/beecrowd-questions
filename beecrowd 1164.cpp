#include<stdio.h>

main(){
	int N, X;
	int cont, i;
	int soma;
	
	scanf("%d", &N);
	
	for(cont=1; cont<=N; cont++){
		scanf("%d", &X);
		soma =0;
		for(i=1; i<X; i++){
			if(X%i==0){
				soma = soma + i;
			}
		}
		if(soma==X){
					printf("%d eh perfeito\n", X);
				}
				else{
					printf("%d nao eh perfeito\n", X);
				}
	}
return 0;
}
