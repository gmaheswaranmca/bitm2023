#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d",&N);
    /*int M = N;
    int D=0, F=-1;
    while(M > 0){
        D = M  % 10;
        if(F == -1) F = D;
        M /= 10;
    }*/
    N = abs(N);
    printf("%d",N/1000+N%10);
    return 0;
}
