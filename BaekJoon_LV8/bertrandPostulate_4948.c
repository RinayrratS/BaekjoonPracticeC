#include <stdio.h>

int main(void){
    int n = 1;
    int arr[500000] = {1, 1, 0,};

    while (1) {
        scanf("%d",&n);
        if (n == 0) break;
        int count = 0;

        for(int i = 2; i <= 2 * n; i++){
            if (arr[i] == 1) continue;
            for(int j = 2; i * j <= 2 * n; j++){
                arr[i * j] = 1;
            }
        }

        for(int k = n + 1; k <= 2 * n; k++){
            if (arr[k] == 0) count++;
        }
        printf("%d\n", count);
    }
}