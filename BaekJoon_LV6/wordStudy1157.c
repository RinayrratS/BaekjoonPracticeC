#include <stdio.h>
#include <string.h>

int main(){
    char ch[1000000]={0};
    // scanf("%s", ch);

    // int i=0;
    // do {
    // scanf("%c", &str[i]);
    // }while(str[i++] != '\n');
    // str[i]='\0';

//     for(int i=0; ; i++) {
//   scanf("%c", &str[i]);
//   if(str[i] == '\n') {
//     str[i]= '\0';
//     break;
//   }
// }

    for(int i=0; ch[i-1]!='\n';i++){
        scanf("%c",&ch[i]);
    }


    int len = strlen(ch);
    int alphabet[26]={0};
    int max = 0;
    char result_char = '?';
    int count = 0;
    
        // 알파벳 개수 누적
        for(int i=0; i<len; i++){
            
            if(ch[i]>='a'){
                alphabet[ch[i]-'a']+=1;
            }
            
            else{
                alphabet[ch[i]-'A']+=1;
            }
        }

        // 개수 max 찾기
        for(int j=0; j<26; j++){
            if(alphabet[j] > max){
                max = alphabet[j];
                result_char = j + 'A';
            }
            else if(alphabet[j]==max){
                result_char = 63;
            }
        }

        printf("%c",result_char);
}