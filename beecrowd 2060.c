#include <stdio.h>

int main(){
    int tests,N,i,o,s=0;
    scanf("%d",&tests);
    for(o = 1;o <= tests;o++){
        scanf("%d",&N);
        s=0;
        for(i = 1;i < N;i++){
            if(N%i == 0){
                s = s + i;
            }
        }
        if(s == N){
            printf("%d eh perfeito\n",N);
        }
        else{
            printf("%d nao eh perfeito\n",N);
        }
    }
    return 0;
}
