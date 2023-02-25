#include <stdio.h>

int main(void){
    int a1,a0;
    int c, n0;
    scanf("%d%d%d%d",&a1,&a0,&c,&n0);

    if (a1<=c && a1*n0+a0<=c*n0) printf("%d",1);
    else printf("%d",0);
}