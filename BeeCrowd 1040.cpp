#include<stdio.h>
	main(){
	
	float n1, n2, n3, n4, exame, mediaF, media;
		scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
	
	media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1))/10;
		printf("Media: %.1f\n", media);
	
	if(media>=7){
		printf("Aluno aprovado.\n");
	}
	else if(media<5){
		printf("Aluno reprovado.\n");
	}
	
	if(media>=5 && media<=6.9){
		printf("Aluno em exame.\n");
		scanf("%f", &exame);
		printf("Nota do exame: %.1f\n", exame);
		
		mediaF = (exame + media)/2;
		
		if(mediaF>=5.0){
			printf("Aluno aprovado.\n");
		}
		else{
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1f\n", mediaF);
		
	}
	return 0;
	}
