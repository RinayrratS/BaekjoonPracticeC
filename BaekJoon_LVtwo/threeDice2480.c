#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if((a==b)&&(b==c))      //3개 모두 같음
        printf("%d",10000+a*1000);

    else if(((a!=b)&&(b!=c))&&((a!=b)&&(c!=a))){        //3개 모두 다름
        int max=a;
        if((b>max)&&(b>=c))max=b;
        else if((c>max)&&(c>=b))max=c;
        else ;
        printf("%d",max*100);
    }
    else{
        int same;
        if(a==b) same=a;
        else if(b==c)same=b;
        else if (a==c) same=c;
        printf("%d",1000+same*100);
    }
    
    return 0;
}