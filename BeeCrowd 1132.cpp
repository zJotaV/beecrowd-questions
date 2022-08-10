#include<stdio.h>

int main(){
	int X, Y;
	int soma=0, i;
	
	scanf("%d%d", &X, &Y);
	
	if(X<Y){
		for(i = X; i<=Y; i++){
			if(i%13!=0){
				soma = soma + i;
			}
		}
	}
	else if(Y<X){
		for(i = Y; i<=X; i++){
			if(i%13!=0){
				soma = soma + i;
			}
		}
	}
	
	printf("%d\n", soma);

	return 0;
}
