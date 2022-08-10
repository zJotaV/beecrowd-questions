#include<stdio.h>

main(){
	int x, soma = 0; 
	float i=0; 
	float media;
	
	while(1){
		scanf("%d", &x);
		if(x>0){
			soma = soma +x;
			i++;
		}
		else{
			break;
		}
	}
	media = soma/i;
	printf("%.2f\n", media);
return 0;
}
