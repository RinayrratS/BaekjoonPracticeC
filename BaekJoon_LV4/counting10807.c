#include <stdio.h>

int main(void)
{
    int N,v,count=0;

    scanf("%d\n",&N);

    int a[N];

    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }scanf("%d",&v);

    for(int i=0;i<N;i++){
        if (v==a[i])count++;
    }printf("%d",count);

    return 0;
}