#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,dice_point,correct=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int points[7]={0},succes=1;
        for(int j=0;j<6;j++){
            scanf("%d",&dice_point);
            points[dice_point]++;
            if(points[dice_point]>1){
                succes=0;
            }
        }
        if(succes){
            correct++;
        }
    }
    printf("%d\n",correct);
}