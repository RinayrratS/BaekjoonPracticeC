#include <stdio.h>

int prime_num(int A){
    int count = 1;
    for (int j=2; j<A; j++){
        if (A % j == 0) count = 0;
    }
    if (A==1) count = 0;
    
    return count;
}

int main(void){
    int N;
    int  num_count = 0;
    scanf("%d", &N);

    for (int i=0; i < N; i++){
        int num;
        scanf("%d",&num);
        
        num_count += prime_num(num);
    }
    printf("%d",num_count);
}