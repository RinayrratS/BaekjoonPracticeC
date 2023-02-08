#include <stdio.h>

int main(void){
    int a,b[30]={0},k=0;

    // a번째 1 대입
    for(int i=0;i<28;i++){
        scanf("%d",&a);
        b[a-1]=1;
    }

    //1부터 30까지 대조
    for(int i=0;i<30;i++){      
        if(b[i]==0)printf("%d\n",i+1);
    }

    return 0;
}