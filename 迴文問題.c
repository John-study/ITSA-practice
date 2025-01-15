#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check(char *input, int len) {
    //fgets會將換行符號(\n)讀取到字串的末尾，故需要去除換行符號
    if(input[len-1]=='\n'){
        input[len-1]='\0';
        len--;
    }
    int j=len-1;
    for(int i=0;i<len/2;i++){
        if(input[i]!=input[j]){
            printf("NO\n");
            return;//一旦發現不同立即停止
        }
        j--;
    }
    printf("YES\n");
}

int main() {
    char input[1000];
    while(fgets(input,sizeof(input),stdin)!=NULL){
        int len=strlen(input);
        check(input,len);
    }

}
