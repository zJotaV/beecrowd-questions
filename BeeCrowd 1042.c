#include<stdio.h>

int main(){
	int X, Y, Z;
	int min, mid, max;
	
	scanf("%d%d%d", &X, &Y, &Z);
	
	if(X<Y && X<Z){
		min = X;
	}
	else if(Y<X && Y<Z){
		min = Y;
	}
	else if(Z<X && Z<Y){
		min = Z;
	}
	if(X>Y && X>Z){
		max = X;
	}
	else if(Y>X && Y>Z){
		max = Y;
	}
	else if(Z>X && Z>Y){
		max = Z;
	}
	
	if((X>Y && X<Z) || (X>Z && X<Y)){
		mid = X;
	}
	else if((Y>X && Y<Z) || (Y>Z && Y<X)){
		mid = Y;
	}
	else if((Z>X && Z<Y) || (Z>Y && Z<X)){
		mid = Z;
	}
	
	printf("%d\n", min);
	printf("%d\n", mid);
	printf("%d\n\n", max);
	
	printf("%d\n", X);
	printf("%d\n", Y);
	printf("%d\n", Z);
	return 0;
}
