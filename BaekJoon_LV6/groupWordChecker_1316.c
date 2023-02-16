#include <stdio.h>
#include <string.h>

// N 2차원 배열 (N개 문자열)
// 0부터 26까지 배열 모두 0 초기화
// 연속되는 숫자 count+1 하지만 0일 때만 word_count 올라감 0이 아니면 continue;

int group_word_check(char word[101]){
    int alphabet[26] = {0,};
    int len = strlen(word);
    int count = 0;

    for(int i=0; i<len; i++){
        if (alphabet[word[i]-'a']== 0){
            alphabet[word[i]-'a'] += 1;
            count = 1;
        }
        else if((alphabet[word[i]-'a']!= 0) && (word[i] == word[i-1])){
            alphabet[word[i]-'a']+=1;
            count = 1;
        }
        else{
            count = 0;
            break;
        }
    }
    return count;
}

int main(void){
    int N;
    scanf("%d",&N);
    char word[100][101]={0};
    int result_count = 0;

    for(int i=0; i<N; i++){
        scanf("%s",word[i]);
    }

    for(int j=0; j<N;j++){
        result_count += group_word_check(word[j]);
    }

    printf("%d", result_count);
}
