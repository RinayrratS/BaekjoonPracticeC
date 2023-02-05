#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,num;
    scanf("%d",&a);
    num=1;

    while(num<10){
        printf("%d * %d = %d\n",a,num,a*num);
        num++;
    }
    
    return 0;
}