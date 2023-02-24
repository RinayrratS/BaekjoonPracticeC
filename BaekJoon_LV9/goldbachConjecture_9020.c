#include <stdio.h>

int isPrime(int A, arr)

int main(void){
    int T;
    scanf("%d", &T);
    int arr[10001] = {1, 1, 0,};

    for(int i = 0; i < T; i++){
        int n;
        scanf("%d", &n);

        for(int i = 2; i <= n; i++){
            if (arr[i] == 1) continue;
            for(int j = 2; i * j <= n; j++){
                arr[i * j] = 1;
            }
        }

        for(int i = n / 2; i <= n; i++){
            if (arr[i] == 0 && arr[n-i] == 0){
                printf("%d %d\n",n-i,i);
                break;
            }
        }


    }
}