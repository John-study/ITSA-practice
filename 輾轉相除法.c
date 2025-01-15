#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,r;
    scanf("%d %d",&m,&n);
    if(n>m){
        int tmp=n;
        n=m;
        m=tmp;
    }
    r=m%n;
    while(r){
        m=n;
        n=r;
        r=m%n;
    }
    printf("%d\n",n);
}