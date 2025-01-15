#include<stdlib.h>
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char input;
        scanf(" %c",&input);    //前面加空格以跳過換行符號
        char output=input+2;
        printf("%c\n",output);
    }
}