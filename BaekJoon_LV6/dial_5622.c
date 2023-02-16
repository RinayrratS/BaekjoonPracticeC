#include <stdio.h>
#include <string.h>

// 영어 입력 다이얼 숫자로 변환
int num_change(char ch){
    if (ch >= 65 && ch <= 67) ch = 2;
    if (ch >= 68 && ch <= 70) ch = 3;
    if (ch >= 71 && ch <= 73) ch = 4;
    if (ch >= 74 && ch <= 76) ch = 5;
    if (ch >= 77 && ch <= 79) ch = 6;
    if (ch >= 80 && ch <= 83) ch = 7;
    if (ch >= 84 && ch <= 86) ch = 8;
    if (ch >= 87 && ch <= 90) ch = 9;

    return ch;
}

// 시간 입력 시 소요시간
int dial_time(int num){
    num+=1;

    return num;
}

int main(void){
    char word[16]={0};
    scanf("%[^\n]s",word);
    int len = strlen(word);
    int sum_time = 0;

    int num_from_word[15]={0,};

    for(int i=0; i<len; i++){
        num_from_word[i] = num_change(word[i]);
        sum_time += dial_time(num_from_word[i]);
    }

    printf("%d",sum_time);
}