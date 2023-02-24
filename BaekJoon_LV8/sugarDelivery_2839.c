#include <stdio.h>

int main(void){
    int N;
    scanf("%d",&N);

    int five, three;
    
    if (N%5 == 0){
        five = N/5;
        three = 0;
    }

    else if (N%5 == 1){
        three = 2;
        five = N/5 - 1;
    }

    else if (N%5 == 2){
        five = N/5 -2;
        three = 4;
    }

    else if (N%5 == 3){
        five = N/5;
        three = 1;
    }

    else if (N%5 == 4){
        three = 3;
        five = N/5 - 1;
    }

    if(five<0){
        printf("%d",-1);
    }

    else{
        printf("%d",five+three);
    }
}