#include <stdio.h>

int main(void){
    //대각선 합 2, 3, 4, 5, 6,
    //a/b일때 a>b이면 
    //1
    //23
    //456
    //789 10
    // 홀수줄 위로 짝수줄 아래로

    long X;
    scanf("%ld",&X);
    long sub = X;
    long i;

    for (i=1; sub > i; i++){
        sub -= i;
    }

    if (i%2 == 0){
        printf("%ld/%ld",sub,i+1-sub);
    }

    else if (i%2 == 1){
        printf("%ld/%ld",i+1-sub,sub);
    }
}