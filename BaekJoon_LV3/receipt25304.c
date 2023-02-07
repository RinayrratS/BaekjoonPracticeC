#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int pay,count;

    scanf("%d\n%d\n",&pay,&count);

    int a[count],b[count],i=0,sum=0;

    while(i<count){
        scanf("%d %d",&a[i],&b[i]);
        sum+=a[i]*b[i];
        i++;
    }

    if (sum==pay) printf("Yes");
    else printf("No");

    return 0;
}