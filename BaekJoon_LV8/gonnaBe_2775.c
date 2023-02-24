#include <stdio.h>

// 2: 1 4 10 20 35
// 1: 1 3 6 10 15
// 0: 1 2 3 4 5 6


int main(void){
    int T,k,n;
    scanf("%d",&T);
    int member[15][15]={0,};

    for (int b=0; b<15;b++){
        member[0][b] = b;
        member[b][1] = 1;
    }

    for ( int a=1; a<15; a++){
        for ( int b=2; b<15;b++){
            for (int c=1; c<=b; c++){
                member[a][b] += member[a-1][c];
            }
            
        }
    }

    for(int i=0;i<T;i++){
        scanf("%d%d",&k,&n);

        printf("%d\n",member[k][n]);
    }
}