#include<stdio.h>
#include<stdlib.h>
int main(){
    char input[5];
    int output[4];
    scanf("%s",input); 
    for(int i=0;i<4;i++){
        output[i]=((input[i]-'0')+7)%10;  //將字元轉換為數字並加密
    }
    int tmp=output[0];
    output[0]=output[2];
    output[2]=tmp;
    tmp=output[1];
    output[1]=output[3];
    output[3]=tmp;
    printf("%d%d%d%d\n",output[0],output[1],output[2],output[3]);
}