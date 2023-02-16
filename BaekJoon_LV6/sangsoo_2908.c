#include <stdio.h>

int invertNum(int a){
    int hun = a/100;
    int ten = (a/10)%10;
    int one = a%10;
    int invertA = one*100 + ten*10 + hun;

    return invertA;
}

int max(int a, int b){
    return a > b ? a : b;
}

int main(void){
    int a,b,inA,inB;
    scanf("%d%d",&a,&b);
    inA = invertNum(a);
    inB = invertNum(b);

    printf("%d", max(inA, inB));
}