#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char input[1000];
    while(fgets(input,sizeof(input),stdin)!=NULL){
        //移除行尾的換行符號
        size_t len=strlen(input);
        if (len>0&&input[len-1]=='\n'){
            input[len-1]='\0';
        }

        if(strlen(input)==0){
            continue;
        }
        char *token[101]={NULL};
        int tokenCount=0;
        token[0]=strtok(input," ");
            while(token[tokenCount]!=NULL){
                token[++tokenCount]=strtok(NULL," ");
            }

            for(int i=tokenCount-1;i>0;i--){
                printf("%s ",token[i]);
            }
        printf("%s\n",token[0]);
    }
}