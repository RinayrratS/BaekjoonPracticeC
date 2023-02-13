#include <stdio.h>

int main(void){
    char a[10000]={0};
    int j=0;

    for(int i=1;i<10000;i++){
        j=i+i/10000+(i/1000)%10+(i/100)%10+(i/10)%10+i%10;
        if(j<=10000){
            a[j-1]+=1;
        }  
    }

    for(int i=0;i<10000;i++){
        if(a[i]==0)printf("%d\n",i+1);
    }
}