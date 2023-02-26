#include <stdio.h>

int main(void){
    int N;
    scanf("%d",&N);
    long arr[10001] = {0,};

    for(int i=0;i<N;i++){
        int n;
        scanf("%d", &n);
        arr[n] += 1;
    }

    for(int i = 1; i<10001;i++){
        while (arr[i]>=1){
            printf("%d\n",i);
            arr[i] -= 1;
        }
    }
}