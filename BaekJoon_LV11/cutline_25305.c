#include <stdio.h>

int main(void){
    int N,k;
    scanf("%d%d",&N,&k);
    int arr[10001] = {0,};
    int cutline;

    for(int i=0;i<N;i++){
        int n;
        scanf("%d",&n);
        arr[n] += 1;
    }

    int count = 0;
    for(int i=0;i<10001;i++){
        while(arr[i]>0){
            count +=1;
            arr[i] -= 1;
            if (count == N-k+1){
                cutline = i;
                break;
            } 
        }
    }

    printf("%d",cutline);
}