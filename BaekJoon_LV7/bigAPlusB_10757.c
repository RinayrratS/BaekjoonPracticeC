#include <stdio.h>
#include <string.h>

int max(int A, int B){
    return A >= B ? A : B;
}

int min(int A, int B){
    return A <= B ? A : B;
}

int main(void){
    char A[10001] = {0};
    char B[10001] = {0};
    char C[10002] = {0};

    scanf("%s ",A);
    scanf("%[^\n]s",B);

    int lenA = strlen(A);
    int lenB = strlen(B);

    int maxlen = max(lenA,lenB);
    int count = 0;

    for(int i=0; i<maxlen;i++){
        // c에 역순으로 저장
        if (lenA-1-i<0) A[lenA-i-1]='0';
        else if (lenB-1-i<0) B[lenB-i-1]='0';

        C[i] = (count + A[lenA-i-1] + B[lenB-i-1] -'0'-'0') % 10 + '0';

        // 자릿수 올림
        if (count + A[lenA-i-1] + B[lenB-i-1] -'0'-'0' >= 10) count = 1;
        else if (count + A[lenA-i-1] + B[lenB-i-1] -'0'-'0' < 10) count = 0;
    }

    if (count == 1) C[strlen(C)]='1';

    // C 역순 printf
    
    for(int j=strlen(C); j>0; j--){
        printf("%d",C[j-1]-'0');
    }printf("\n");

}