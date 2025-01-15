#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char know[21][21]={0};
    char line[21];
    int max_i=0,max_j=0;
    while(fgets(line,sizeof(line),stdin)!=NULL){
        line[strcspn(line,"\n")]=0;  //去掉換行符
        int tmp_j=0;
        for(int k=0;line[k]!='\0';k++){
            if(line[k]!=' '){
                know[max_i][tmp_j]=line[k];
                tmp_j++;
            }
        }
        max_i++;
    }
    int table[21]={0};
    max_j=strlen(know[0]);
    for(int i=0;i<max_i;i++){
        for(int j=0;j<max_j;j++){
            if(know[i][j]=='Y'){
                table[j]++;
            }
        }
    }

    int max_value=0,person=-1,is_unique=1;
    for (int j=0;j<max_j;j++){
        if(table[j]>max_value){
            max_value=table[j];
            person=j;
            is_unique=1; 
        } 
        else if(table[j]==max_value){
            is_unique=0; //若有相同最大值，設為非唯一
        }
    }

    if(is_unique){
        printf("%d\n",person+1); 
    }
    else{
        printf("NO!\n");
    }

}