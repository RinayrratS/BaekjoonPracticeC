#include <stdio.h>

int main(void)
{
    int a,max=0,count=0,i=0,j=0;

    while(i<9){
        scanf("%d",&a);
        i++;
        if(a>max){
            max=a;
            j=i;
        }
    }printf("%d\n%d",max,j);

    return 0;
}