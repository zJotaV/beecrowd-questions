#include<stdio.h>

int main(){
	int X;
	int cont;
	scanf("%d", &X);
	for(cont=1; cont<X; cont++){
		if(cont%2!=0){
			printf("%d\n", cont);
		}
	}
	if(X%2!=0){
		printf("%d\n", X);
	}
	return 0;
}
