#include <stdio.h>

int main(void){
    int N;
    scanf("%d",&N);
    int arr[2000001] = {0,};

    for(int i=0;i<N;i++){
        int n;
        scanf("%d", &n);
        arr[n+1000000] = 1;
    }

    for(int i = 0; i<2000001;i++){
        if(arr[i]==1) printf("%d\n",i-1000000);
    }
}