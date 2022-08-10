#include<stdio.h>

int main(){
	int X, Y;
	int cont;
	
	scanf("%i", &X);
	scanf("%i", &Y);
	
	if(X>Y){
		for(cont = Y + 1; cont<X; cont++){
			if(cont%5 == 2 || cont%5 == 3){
				printf("%d\n", cont);
			}
		}
	}
	else{
		for(cont = X + 1; cont<Y; cont++){
			if(cont%5 == 2 || cont%5 == 3){
				printf("%d\n", cont);
			}
		}
	}
	return 0;
}
