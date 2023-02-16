#include <stdio.h>
#include <string.h>

int main(void){
    char sentence[1000000]={0};
   
    // %[^\n]s : 엔터가 나올 때까지 입력을 받음
    scanf("%[^\n]s", sentence);

    int len = strlen(sentence);
    int count = 0;
    
    for(int i=0; i<len+1; i++){
        if(sentence[i]<123 && sentence [i]>64){
            if(sentence[i+1]>=123 || sentence[i+1]<=64) count++;
        }
    }
    printf("%d",count);

}