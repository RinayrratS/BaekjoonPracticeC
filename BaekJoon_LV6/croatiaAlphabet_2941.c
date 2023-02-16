#include <stdio.h>
#include <string.h>

int main(void){
    char word[103]={0};
    scanf("%[^\n]s", word);
    int len = strlen(word);
    int alphabet_count = len;

    for(int i=0; i<len; i++){
        if (word[i]=='c'){
            if(word[i+1]=='=') alphabet_count -= 1;
            if(word[i+1]=='-') alphabet_count -= 1;
        }
        else if (word[i]=='d'){
            if (word[i+1]=='z'){
                if (word[i+2]=='=') alphabet_count -= 1;
            }
            else if (word[i+1]=='-') alphabet_count -= 1;
        }
        else if (word[i]=='l'){
            if(word[i+1]=='j') alphabet_count -= 1;
        }
        else if (word[i]=='n'){
            if(word[i+1]=='j') alphabet_count -= 1;
        }
        else if (word[i]=='s'){
            if(word[i+1]=='=') alphabet_count -= 1;
        }
        else if (word[i]=='z'){
            if(word[i+1]=='=') alphabet_count -= 1;
        }
    }

    printf("%d",alphabet_count);

}