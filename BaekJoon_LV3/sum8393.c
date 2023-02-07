#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count,i=0,sum=0;

    scanf("%d",&count);

    while(i<count+1){
        sum+=i;
        i++;
    }
    printf("%d",sum);

    return 0;
}