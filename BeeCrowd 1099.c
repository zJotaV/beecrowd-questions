#include<stdio.h>

main(){
	int N, X, Y;
	int soma;
	int cont, cont2;
	
	scanf("%d", &N);
	
	for(cont=1; cont<=N; cont++){
		soma = 0;
		scanf("%d %d", &X, &Y);
		
		if(X>Y){
			for(cont2=Y+1; cont2<X; cont2++){
				if(cont2%2!=0){
					soma = soma + cont2;
				}
			}
		}
		else if(X<Y){
			for(cont2=X+1; cont2<Y; cont2++){
				if(cont2%2!=0){
					soma = soma + cont2;
				}
			}
		}
		printf("%d", soma);
	}
return 0;
}
