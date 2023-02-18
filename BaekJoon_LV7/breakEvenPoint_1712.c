#include <stdio.h>

int main(void){
    long A,B,C;
    long sales_amount;

    scanf("%ld%ld%ld",&A,&B,&C);

    if(C>B){
        sales_amount=A/(C-B) + 1;
    }

    else if(B>=C) sales_amount = -1;

    printf("%ld", sales_amount);

}