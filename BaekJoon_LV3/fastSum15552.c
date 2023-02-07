#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count;
    scanf("%d\n",&count);

    int a[count],b[count],i=0,j=0;

    while(i<count){
        scanf("%d %d",&a[i],&b[i]);
        printf("%d\n",a[i]+b[i]);
        i++;
    }

    

    return 0;
}