#include <stdio.h>

int main (){
    int X;
	int cont;
	int mult=1;
    scanf("%d", &X);
    for (cont = X; cont >=1; cont--){
        mult = mult*cont ;
    }
        printf("%d\n",mult);
    return 0;
}
