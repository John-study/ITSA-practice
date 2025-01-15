#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,t,conti=1,now=1;
    scanf("%d",&n);
    char people[n+1];
    for (int i=1;i<=n;i++) {
        scanf(" %c",&people[i]);
    }
    scanf("%d",&t);
    while (conti==1){
        if (now%t!=0&&now<=n){
            printf("%c",people[now]);
        } 
        else if (now%t==0&&now<n){
            printf("%c ",people[now]);
        }
        else if(now==n){
            printf("%c",people[now]);
        } 
        else if (now>n){
            conti = 0;
        }
        now++;
    }
    printf("\n");
    return 0;
}