#include<stdio.h>
#include<stdlib.h>

main(){
	
	int cont, X;
	float nota, aux=0;
	
	do{
		aux=0;
		for(cont=1; cont<=2;){
			scanf("%f", &nota);
			if(nota>=0 && nota<=10){
				aux = aux + nota;
				cont++;
			}
			else{
				printf("nota invalida\n");
			}
		}
		printf("media = %.2f\n", aux/2);
	
		do{
			printf("novo calculo(1-sim 2-nao)\n");
			scanf("%d", &X);
		}while(X!=1 && X!=2);
	
	}while(X==1);
	
	system("pause");
	return 0;	
}
