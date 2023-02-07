#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count;
    int i=0,j=0;

    scanf("%d\n",&count);
    int a[count],b[count];

    while(i<count){
        scanf("%d %d",&a[i],&b[i]);
        i++;
    }
    while(j<count){
        printf("%d\n",a[j]+b[j]);
        j++;
    }
    

    return 0;
}