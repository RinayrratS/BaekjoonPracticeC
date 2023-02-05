#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int Time,Hour,Min;
    int Total,h,m;

    scanf("%d %d\n%d",&Hour,&Min,&Time);

    Total=Hour*60+Min+Time;
    h=Total/60;
    m=Total%60;

    if (h<24)printf("%d %d",h,m);
    else printf("%d %d",h%24,m);
}