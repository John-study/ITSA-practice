#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int check(char string[513],char pat[129],int pat_len,int current){
    for(int i=0;i<pat_len;i++){
        if(string[current]!=pat[i]){
            return 0;
        }
        current++;
    }
    return 1;
}
int main(){
    char pat[129],string[513];
    int count=0;
    scanf("%s",pat);
    scanf("%s",string);
    int string_len=strlen(string),pat_len=strlen(pat);
    for(int i=0;i<string_len;i++){
        if(string[i]==pat[0]){
           count+=check(string,pat,pat_len,i);
        }
    }
    printf("%d\n",count);
}