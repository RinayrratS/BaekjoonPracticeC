#include <stdio.h>

int main(void)
{
    int N,max,min;

    scanf("%d\n",&N);
    int a[N];

    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];max=a[0];

    for(int i=1;i<N;i++){
        if (a[i]>max)max=a[i];
        else if(a[i]<min)min=a[i];
    }

    printf("%d %d",min,max);

    return 0;
}