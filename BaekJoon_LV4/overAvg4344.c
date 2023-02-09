#include <stdio.h>
#include <string.h>

int main(void){
    int C,N;
    double percent;
    scanf("%d\n",&C);

    for(int i=0;i<C;i++){
        scanf("%d",&N);
        int sum=0,count=0;
        int a[N]; 
        for(int j=0;j<N;j++){
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        double avg=(double)sum/N;

        for(int k=0;k<N;k++){
            if(a[k]>avg){
                count++;
            }
        }
        percent=((double)count/N)*100;
        printf("%.3f%%\n",percent);
    }

    return 0;
}