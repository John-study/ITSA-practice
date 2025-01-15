#include<stdio.h>
#include<stdlib.h>
void check(int result[4]){
    int count[7]={0},success=0;
    for(int i=0;i<4;i++){
        count[result[i]]++;
    }
    //判斷是否「通殺」
    for(int i=1;i<=6;i++){
        if(count[i]==4){
            printf("WIN\n");
            return;
        }
    }

    for(int i=1;i<=6;i++){
        if(count[i]==2){    //因為只有四個骰子，故只要有兩顆骰子相同即可
            success=1;
        }
    }
    if(success){
        int sum=0,pairs[2]={0},pairs_count=0;
        int j=0;
        for(int i=1;i<=6;i++){
            if(count[i]==2){
                pairs[j]=i;
                j++;
                pairs_count++;
            }
        }
        if(pairs_count!=1){
            sum=pairs[1]*2;
        }
        else{
            for(int i=1;i<=6;i++){
                if(count[i]==1){
                    sum+=i;
                }
            }
        }
        printf("%d\n",sum);
    }
    else if(!success){
        printf("R\n");
    }
}
int main(){
    int point,result[5],i=0;
    while(scanf("%d",&point)!=EOF){
        result[i]=point;
        i++;
        if(i==4){
            check(result);
            i=0;
        }
    }
}