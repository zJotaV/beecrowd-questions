#include<stdio.h>

int main(){
    int par = 0, impar = 0, pos = 0, neg = 0;
    int x;
    int cont;

    for(cont = 0; cont = 5; cont++){
        scanf("%d", &x);

        if(x%2 == 0){
            par++;
        }
        else if(x%2 != 0){
            impar++;
        }
        if(x > 0){
            pos++;
        }
        else if(x < 0){
            neg++;
        }
    }
    printf("%d numeros pares\n", par);
    printf("%d numeros impares\n", impar);
    printf("%d numeros positivos\n", pos);
    printf("%d numeros negativos\n", neg);
return 0;
    
}2