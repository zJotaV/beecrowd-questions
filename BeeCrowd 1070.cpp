#include<stdio.h>

int main(){
	int X;
	int cont, i = 0;
	
	scanf("%d", &X);
	
	for(cont=X; ; cont++){
		if(cont%2!=0){
			printf("%d\n", cont);
			i++;
		}
		if(i==6){
			break;
		}
	}
	return 0;
}
