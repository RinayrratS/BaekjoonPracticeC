#include <stdio.h>

int digitSum(int n) {
    return n < 10 ? n : (n%10 + digitSum(n/10));
}

int d(int n) {
    return n + digitSum(n);
}

#define MAX 10000

int main() {
    int creators[MAX] = {0};    // 숫자 d(n)의 생성자를 creators[d(n)]에 담을 예정. 처음에는 0으로 초기화.

    for(int n=1; n<MAX; n++) {
        int dn = d(n);
        if(dn < MAX) creators[dn] = n;
    }
    for(int n=1; n<MAX; n++)
        if(creators[n] == 0)    // 한번도 생성자가 저장된 적이 없는 항목. 즉, 셀프넘버.
            printf("%d\n", n);
    printf("\n");
    return 0;
}
