#include <stdio.h>

int main(void){
    int N,max=0;
    double avg,sum=0;

    scanf("%d",&N);

    double a[N];

    // 입력 받고 max 찾기
    for(int i=0;i<N;i++){
        scanf("%lf",&a[i]);
        if(a[i]>max)max=a[i];
    }

    // 최댓값으로 나누고 100 곱하기
    for(int i=0;i<N;i++){
        a[i]=(a[i]*100)/max;
        sum+=a[i];
    }
    avg=sum/N;

    printf("%lf",avg);

    return 0;
}