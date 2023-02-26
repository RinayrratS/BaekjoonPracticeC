#include <stdio.h>

int main(void){
    int arr[10] = {0,};
    int sum = 0;
    int avg, mid;

    // input
    for (int i=0;i<5;i++){
        int n;
        scanf("%d",&n);
        sum += n;
        arr[n/10 - 1] += 1;
    }

    // avg
    avg = sum/5;


    // mid
    int count = 0;
    for (int i = 0;i<10;i++){
        while(arr[i]>=1){
            count += 1;
            arr[i] -= 1;

            if(count == 3){
                mid = (i+1)*10;
                break;
            }
        }
    }

    printf("%d\n%d",avg,mid);

}