#include <stdio.h>
//1     6*0+1
// 2-7      6*1+1
// 8- 19    6*3+1
// 20-37    6*6+1
// 38-61    6*10+1



int main(void){
    long N;
    scanf("%ld", &N);
    int mul_num = 0;
    int sum = 0;
    int i;

    for(i=0;sum < N;i++){
        sum = 6 * (mul_num + i) + 1;
        mul_num = mul_num + i;
    }
    printf("%d",i);
}