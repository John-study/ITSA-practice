#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool is_prime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(is_prime(n)){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}