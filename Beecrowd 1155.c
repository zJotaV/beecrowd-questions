#include <stdio.h>

int main(){
    double S=0,A,i=1;
    while(i <=100){
        A = (1/i);
        S= S + A;
        i++;
    }
    printf("%.2lf\n",S);
    return 0;
}
