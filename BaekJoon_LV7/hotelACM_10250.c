#include <stdio.h>

int main(void){
    int T, H, W, N;
    scanf("%d",&T);
    int floor, num;

    for(int i=0; i<T; i++){     // test case
        scanf("%d%d%d",&H,&W,&N);

        floor = N % H == 0 ? H : N%H;
        num = N / H == 0 ? 1 : (N % H == 0 ? N/H : N/H +1);
        

        printf("%d\n",floor*100+num);
    }
}