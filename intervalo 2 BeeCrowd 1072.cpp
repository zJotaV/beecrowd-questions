#include<stdio.h>

main(){
	int N;
	int X;
	int in = 0, out = 0;
	int cont;
	
	scanf("%d", &N);
	
	for(cont = 0; cont<N; cont++){
		
		scanf("%d", &X);
		
		if(X>=10 && X<=20){
			in++;
		}
		else{
			out++;
		}
	}
	printf("%d in\n", in);
	printf("%d out\n", out);
	
return 0;
}
