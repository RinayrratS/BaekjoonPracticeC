#include <stdio.h>

int main(){
    int N,sum=0;
    scanf("%d",&N);
    char arr[N];

    for(int i=0;i<N;i++){
        scanf("%c",&arr[i]);
    }

    for(int i=0;i<N;i++){
        sum+=arr[i]-'0';
    }

    printf("%d",sum);
}