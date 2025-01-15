#include<stdio.h>
#include<stdlib.h>
int main(){
    char isbn[2];
    int isbn_num[10]={0},isbn_sum1[10]={0},check=0;

    for(int i=0;i<10;i++){
        scanf("%s",isbn);   //%s格式符號會跳過空格
        if(isbn[0]=='X'){
            isbn_num[i]=10;
        }
        else
            isbn_num[i]=isbn[0]-'0';
    }

    isbn_sum1[0]=isbn_num[0];
    for(int i=1;i<10;i++){
        isbn_sum1[i]=isbn_num[i]+isbn_sum1[i-1];
    }
    for(int i=0;i<10;i++){
        check+=isbn_sum1[i];
    }
    if(check%11==0){
        printf("YES\n");
    }
    else
        printf("NO\n");
}