#include <stdio.h>

int num(int A,int B,int V){
    return (V-A)%(A-B) == 0 ? 1 : 2;
}

int main(void){
    int A,B,V;
    scanf("%d%d%d",&A,&B,&V);
    int days;

    // int height = 0;

    // for (days=0; height<V; days++){
    //     height += A;

    //     if(height < V){
    //         height -= B;
    //     }

    // }

    days = (V-A)/(A-B) + num(A,B,V);

    printf("%d", days);
}