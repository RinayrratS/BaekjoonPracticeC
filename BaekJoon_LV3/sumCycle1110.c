#include <stdio.h>

int main(void)
{
    int a,b,i=0;

    scanf("%d",&a);

    if (a<10) a=a*10;

    while(b!=a){
        int a1=a/10;
        int a2=a%10;
        b=a2*10+a1+a2;
        i++;
    }

    printf("%d",i);
}