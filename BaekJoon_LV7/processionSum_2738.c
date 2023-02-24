#include <stdio.h>

int main(void){
    int N,M;
    scanf("%d%d", &N, &M);
    int arr[200][100] = {0,};

    // input
    for(int i = 0; i < 2 * N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // 더하고 출력
    for(int i = 0; i < N; i++){
        for(int j=0;j<M;j++){
            arr[i][j] += arr[i+N][j];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}