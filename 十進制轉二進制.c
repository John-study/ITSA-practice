#include<stdio.h>
#include<stdlib.h>
void printBinary(int num){
    unsigned int mask=128; //128=2^7，從最高位開始
    for (int i=0;i<8;i++){
        if(num&mask){
            printf("1");
        } 
        else{
            printf("0");
        }
        mask>>=1; //掩碼右移一位
    }
}

int main(){
    int number;
    scanf("%d",&number);
    printBinary(number); 
    printf("\n");
}
