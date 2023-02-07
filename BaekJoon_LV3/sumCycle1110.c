#include <stdio.h>

int main(void)
{
    int N,b,i=0;

    scanf("%d",&N);
    int N10=N/10;
    int N1=N%10;
    b=N;

    while(1){
        b=N1*10+(N10+N1)%10;
        N10=b/10;
        N1=b%10;
        i++;

        if(b==N)break;
    }    

    printf("%d",i);

    return 0;
}