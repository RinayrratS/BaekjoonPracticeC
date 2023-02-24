// 6-8 반례찾습니다..

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int n = 0, cnt = 0, len, res, his_cnt;
   
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char history[101] = {0};      //단어 하나에서 나오는 알파벳을 순서대로 저장(연속 동일 알파벳은 하나만)
        char word[101] = {0};
        scanf("%s", word);
        len = strlen(word);
        res = 1, his_cnt = 0;   // aaaaaaaaa처럼 같은 알파벳으로만 이루어진 글자를 위해 기본값 1로 설정

        for (int j = 0; j < len; j++) {

            if (word[j] != word[j + 1]) {

                for (int k = 0; k < j; k++) {
                    if (his_cnt == 0) res *= 1;
                    else if (word[j] == history[k]) res *= 0;   //이전에 저장했던 history 와 같은 값을 가지면 0
                    else res *= 1;
                }
                history[j] = word[j];      //바뀌기 전 마지막 알파벳을 history에 저장
                his_cnt++;               //history에 저장되었는지 유무 확인
            if (res == 0) break;
            }
        }
        if (res == 1) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}