#include <stdio.h>

int prime_num(int A){
    int count = 1;

    if (A == 1) count = 0;

    for(int i = 2; i < A; i++){
        if(A % i == 0){
            count = 0;
        }
    }
    return count;
}

int main(void){
    int M,N;
    scanf("%d%d",&M,&N);
    int sum = 0;
    int min;
    int min_count = 0;

    for(int j = M; j <= N; j++){
        if (prime_num(j) == 1) {
            min_count++;
            sum += j;
        }
        if (prime_num(j) == 1 && min_count == 1) min = j;
    }

    if (min_count > 0) printf("%d\n%d",sum,min);
    else if (min_count == 0) printf("%d\n",-1);

}