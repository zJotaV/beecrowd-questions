#include<stdio.h>

main(){
	int A, N, i, soma = 0;
	
	scanf("%d%d", &A, &N);
	
	while(N == 0 || N < 0){
		scanf("%d", &N);
	}
	for(i=0; i<N; i++){
		soma = soma + A + i;
	}
	printf("%d\n", soma);
return 0;
}
