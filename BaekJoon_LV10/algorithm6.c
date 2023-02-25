#include <stdio.h>

int main(void){
    long long n;
    scanf("%lld",&n);

    printf("%lld\n%d", n*(n-1)*(n-2)/6, 3);   // 1에서 n사이에서 숫자 3개 선택 확률과 동일
}