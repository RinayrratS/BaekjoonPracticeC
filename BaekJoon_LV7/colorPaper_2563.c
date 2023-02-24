#include <stdio.h>

int main(void){
    int arr[100][100] = {0,};
    int n;
    scanf("%d",&n);
    int x,y;
    int count = 0;

    // input 개수
    for(int i = 0; i < n; i++){
        scanf("%d%d", &x, &y);

        // 10 * 10 색종이 input
        for(int j = x; j < x + 10; j++){
            for(int k = y; k < y + 10; k++){

                if(arr[j][k]==1) continue;  // 이미 검은 부분 continue
                
                arr[j][k] = 1;      // 검은 부분 1, 하얀 부분 0
                count++;    // 검은 부분 수 count
            }
        }
    }

    // output
    printf("%d", count);
}