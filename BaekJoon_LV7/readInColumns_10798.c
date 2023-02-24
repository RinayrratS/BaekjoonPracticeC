#include <stdio.h>

int main(void){
    char arr[5][16] = {0};
    
    // 입력
    for(int i = 0; i < 5; i++){
        scanf("%s", arr[i]);
    }

    // 출력
    for(int j=0;j<15;j++){
        for(int i=0;i<5;i++){
            if(arr[i][j]=='\0')continue;
            printf("%c",arr[i][j]);
        }
    }
}