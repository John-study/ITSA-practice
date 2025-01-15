#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
//判斷是否為質數的函數
bool is_prime(int n){
    if(n<2) 
        return false; 
    for(int i=2;i*i<=n;i++){ //只需檢查到sqrt(n)
        if(n%i==0) 
        return false; //若能被 i 整除，則不是質數
    }
    return true;
}

//找出小於給定數的最大質數
int find_largest_prime(int n){
    for (int i=n-1;i>1;i--){ //從 n-1 開始遞減檢查
        if(is_prime(i)){
            return i; //找到質數後立即返回
        }
    }
    return -1; //若未找到質數（小於 2 的情況），返回 -1
}

int main(){
    int num;
    while(scanf("%d",&num)!=EOF){
        if(num<=2){
            printf("0\n");
        } else{
            int largest_prime=find_largest_prime(num);
            printf("%d\n",largest_prime);
        }
    }

}