#include<stdio.h>

main(){
	int x;
	int cont;
	int N;
	
	for(cont=1; ; cont++){
		x = 1;
		scanf("%d", &N);
		
		while(x>0 && x<N){
			printf("%d ", x);
			x = x +1;
		}
		if(N==0){
			break;
		}
		printf("%d\n", x);
	}
	
return 0;
}
