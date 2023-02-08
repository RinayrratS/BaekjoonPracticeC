#include <stdio.h>

int main(void)
{
    int a[10],b[42]={0},j=0,count=0;

    // 10개 값 받기
    for(int i=0;i<10;i++)scanf("%d",&a[i]);

    // a%42한 값 b+1
    for(int i=0;i<10;i++){
        a[i]=a[i]%42;
        b[a[i]]+=1;
    }

    // 0 아닌 b 갯수
    for(int i=0;i<42;i++){
        if(b[i]!=0)count++;
    }printf("%d",count);

    return 0;
}