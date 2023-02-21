#include <stdio.h>

// 자료가 크기 때문에 에라토스테네스의 체 활용

int main(void){
    int arr[1000001] = {0,};    // 1은 소수가 아님, 0은 소수
    int M, N;
    scanf("%d%d",&M, &N);

    // 에라토스테네스의 체
    for(int i = 2; i <= N; i++){    // 판단하려는 수 i
        if (arr[i] == 1) continue;
        for(int j=2; i * j <= N; j++){  // 나눠지는 수 j
            arr[i * j] = 1;
        }
    }
    arr[1] = 1;

    // 출력
    for(int i = M; i <= N; i++){
        if(arr[i] == 0) printf("%d\n",i);
    }
}