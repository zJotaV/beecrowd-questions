#include<stdio.h>

int main(){
	
	int x, cont, i=0;
	
	for(cont=1; cont<=5; cont++){
		scanf("%d", &x);
		if(x%2==0){
			i++;
		}
	}
	printf("%d valores pares\n", i);
	return 0; 
}
