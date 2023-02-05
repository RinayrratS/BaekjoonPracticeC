#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a,b;
    int num1,num2,num3;

    scanf("%d%d",&a,&b);

    int b1=b/100;
    int b2=((b/10)-(b/100)*10);
    int b3=b%10;

    num1=a*b3;
    num2=a*b2;
    num3=a*b1;

    printf("%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n",num3);
    printf("%d\n",num1+num2*10+num3*100);

    return 0;
}