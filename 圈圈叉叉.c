#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool check(int game[3][3]){
    for(int i=0;i<3;i++){   //檢查每一列
       if(game[i][0]==game[i][1]&&game[i][1]==game[i][2]){
            return true;
       }
    }
    for (int i=0;i<3;i++){   //檢查每一行
        if(game[0][i]==game[1][i]&&game[1][i]==game[2][i]){
            return true;
        }
    }
    if(game[0][0]==game[1][1]&&game[1][1]==game[2][2]){ //檢查主對角線
        return true;
    }
    if(game[0][2]==game[1][1]&&game[1][1]==game[2][0]){ // 檢查副對角線
        return true;
    }
    return false;
}
int main(){
    int game[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&game[i][j]);
        }
    }
    if(check(game)){
        printf("True\n");
    } 
    else{
        printf("False\n");
    }
}