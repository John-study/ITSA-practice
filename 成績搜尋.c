#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int score[n],max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&score[i]);
        if(score[i]>max){
            max=score[i];
        }
    }
    printf("%d\n",max);
}