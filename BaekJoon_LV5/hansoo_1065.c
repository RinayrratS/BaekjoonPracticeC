#include <stdio.h>

int main(void){
    int N,digit,count=99;
    scanf("%d",&N);

    //  자릿수 계산
    int n=N;
    for(digit=0;n!=0;n=n/10){
        digit ++;
    }
    
    if(digit <=2){
        printf("%d",N);
    }

    else if(digit>2)
    {    //  각 자리 숫자 배열
        int a[digit];
        for(int i=100;i<=N;i++){
            a[2]=i%10;
            a[1]=(i/10)%10;
            a[0]=(i/100)%10;

            if(a[2]==0&&a[1]==0&&a[0]==0) break;
            else if(a[2]-a[1]==a[1]-a[0]) count++;
        }
        printf("%d",count);
    }
}