#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar(); //消耗掉scanf後的換行符

    for (int i=0;i<n;i++){
        char input[1000];
        if (!fgets(input,sizeof(input),stdin)){
            continue; //若讀取失敗，跳過本行
        }

        //去除開頭的空白行
        if (strlen(input)==0||input[0]=='\n'){
            i--; //跳過無效輸入，保證處理正確筆數
            continue;
        }

        //解析第一個數字為 m
        char *token=strtok(input," \n");
        int m=atoi(token);
        if(m==0){
            printf("0\n");
            continue; //如果沒有雞隻，直接輸出0並跳過
        }

        int weights[m]; //用於存放雞隻重量

        for(int j=0;j<m;j++){
            token=strtok(NULL," \n");
            weights[j]=atoi(token);
        }

        int changeCount=0;

        //選擇排序並計算交換次數
        for(int k=0;k<m-1;k++){
            int max=k;
            for(int l=k+1;l<m;l++){
                if(weights[l]>weights[max]){
                    max=l;
                }
            }
            if(max!=k){
                int temp=weights[k];
                weights[k]=weights[max];
                weights[max]=temp;
                changeCount++;
            }
        }

        printf("%d\n",changeCount);
    }
}
