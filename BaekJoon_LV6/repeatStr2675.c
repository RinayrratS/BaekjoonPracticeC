#include <stdio.h>
#include <string.h>

int main(){
    int T,R;
    scanf("%d",&T);
    char S[20];

    // R S 받기
    for(int i=0;i<T;i++){
        scanf("%d%s",&R,S);
        int len=strlen(S);

        // \0이 아닐때까지 
        for(int j=0;j<len;j++){

            // R번 반복
            for(int k=0;k<R;k++){
                printf("%c",S[j]);
            }
        }
        printf("\n");
    }

}