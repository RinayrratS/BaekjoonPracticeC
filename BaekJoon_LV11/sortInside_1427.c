#include <stdio.h>

int arrN(int N){
    int digitN;
    return digitN = N < 10 ? N : arrN(N % 10);
}

int main(void){
    long long N;
    scanf("%lld", &N);
    int scan_arr[10] = {0,};    // input digits 분리
    int arr[10] = {0,};     // 순서대로 array된 N digits
    int digits = 0;

    // input digits 분리
    for(int i=0; i < 10; i++){
        scan_arr[i] = arrN(N);
        N /= 10;
        digits++;
        if(N < 1) break;
    }

    // 분리된 digits 순서대로 재배열
    for(int i=0;i<digits;i++){
        arr[scan_arr[i]] += 1;
    }

    // output
    for(int i=9;i>=0;i--){
        while(arr[i]>=1){
            printf("%d",i);
            arr[i] -= 1;
        }
    }
}