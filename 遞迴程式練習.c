#include<stdio.h>
#include<stdlib.h>
int f(int k){
    if(k==0||k==1){
        return k+1;
    }
    else
        return f(k-1)+f(k/2);
}
int main(){
    int k;
    scanf("%d",&k);
    int result=f(k);
    printf("%d\n",result);
}