#include <stdio.h>
#include <math.h>

int main(void){
    int N;
    scanf("%d",&N);
    int arr[10001] = {0,};
    double sum = 0;

    // input
    for (int i=0;i < N; i++){
        int n;
        scanf("%d",&n);
        sum += n;
        arr[n + 5000] += 1;
    }


    // avg
    double avg = sum/N;
    if (round(avg) == -0) avg = 0;   // -0 방지


    // mid
    int count = 0;
    int mid;

    for (int i = 0; i < 10001; i++){
        int j = 1;
        while (arr[i] >= j){
            count += 1;
            j += 1;
            if (count == N/2 + 1){
                mid = i - 5000;
                break;
            }
        }
    }


    // mode 최빈값
    int mode;
    int mode_num = 0;
    int mode_count = 0;

    for (int i = 1; i < 10001; i++){
        if (arr[i] > mode_num){
            mode = i-5000;
            mode_count = 1;
            mode_num = arr[i];
        }
        else if (arr[i] == mode_num && mode_count == 1){
            mode = i-5000;
            mode_count += 1;   
        }
    }


    // range
    int max = 0;
    int min = 10000;

    for (int i=0; i < 10001; i++){
        if (arr[i] >= 1){
            max = max > i ? max : i;
            min = min < i ? min : i;
        }
    }
    int range = max - min;

    printf("%.f\n%d\n%d\n%d\n", round(avg), mid, mode, range);
}