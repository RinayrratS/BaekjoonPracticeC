#include <stdio.h>
#include <string.h>

int main(){
    char S[100];
    scanf("%s",S);
    int len = strlen(S);
    int arr[26]={0,};

    // arr 배열에 순서 대입
    for(int i=0;i<len;i++){
        if(arr[S[i]-97] ==0){
            arr[S[i]-97]=i+1;
        }
    }

    // arr 배열 -1
    for(int j=0;j<26;j++){
        arr[j]-=1;
    }

    // 출력
    for(int j=0;j<26;j++){
        printf("%d ",arr[j]);
    }
}