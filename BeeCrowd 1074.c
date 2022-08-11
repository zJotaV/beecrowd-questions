#include<stdio.h>

int main(){
	int N, X;
	int cont;
	
	scanf("%d", &N);
	
	for(cont=1; cont<=N; cont++){
		scanf("%d", &X);
		if(X%2==0 && X!=0){
			printf("EVEN ");
		}
		else if(X%2!=0 && X!=0){
			printf("ODD ");
		}
		
		if(X>0){
			printf("POSITIVE\n");
		}
		else if(X<0){
			printf("NEGATIVE\n");
		}
		
		if(X==0){
			printf("NULL\n");
		}	
	}
	return 0;
}
