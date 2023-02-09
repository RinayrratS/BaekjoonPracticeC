#include <stdio.h>
#include <string.h>

int main(void)
{
    int N;

    scanf("%d",&N);

    for(int i=0;i<N;i++){
        int total =0,score=0;
        char a[80]={0};
        scanf("%s",a);
        int len = strlen(a);

        for(int j=0;j<len;j++){
            if(a[j]=='O'){
                score+=1;
                total+=score;
            }
            else if(a[j]=='X'){
                score=0;
            }
            else if(a[j]=='\n')break;
        }printf("%d\n",total);
    }

    return 0;
}