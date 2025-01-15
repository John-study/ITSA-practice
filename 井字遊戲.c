#include<stdio.h>
#include<stdlib.h>
void check(char game[3][3]){
    int success=0;
    for(int i=0;i<3;i++){
        if(game[i][0]==game[i][1]&&game[i][1]==game[i][2]){
            if(game[i][0]=='0'||game[i][0]=='X'){
                printf("%c bingle\n",game[i][0]);
                success=1;
            }
        }
    }
    for(int i=0;i<3;i++){
        if(game[0][i]==game[1][i]&&game[1][i]==game[2][i]){
            if(game[0][i]=='0'||game[0][i]=='X'){
                printf("%c bingle\n",game[0][i]);
                success=1;
            }
        }
    }
    if(game[0][0]==game[1][1]&&game[1][1]==game[2][2]){
        if(game[0][0]=='0'||game[0][0]=='X'){
            printf("%c bingle\n",game[0][0]);
            success=1;
        }
    }
    if(game[0][2]==game[1][1]&&game[1][1]==game[2][0]){
        if(game[0][2]=='0'||game[0][2]=='X'){
            printf("%c bingle\n",game[0][2]);
            success=1;
        }
    }
    if(success==0){
        printf("Tie\n");
    }
}
int main(){
    int game[3][3];
    char chargame[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&game[i][j]);
            if(game[i][j]==0)
                chargame[i][j]='*';
            else if(game[i][j]==1)
                chargame[i][j]='0';
            else if(game[i][j]==2)
                chargame[i][j]='X';
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%c",chargame[i][j]);
        }
        printf("\n");
    }
    check(chargame);
}