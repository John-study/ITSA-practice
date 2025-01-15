#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *score;
    score = (int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&score[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(score[j]<score[j+1]){
                int tmp=score[j];
                score[j]=score[j+1];
                score[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d %d\n",i+1,score[i]);
    }
}