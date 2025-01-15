#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
   char input[1000];
   int count[128]={0};
   fgets(input,sizeof(input),stdin);
   for(int i=0;input[i]!='\0';i++){
        if(input[i]!='\0'||input[i]!='\n'){
            count[(int)input[i]]++;
        }
   }
   for(int i=127;i>=32;i--){
        if(count[i]!=0){
            printf("%d %d\n",i,count[i]);
        }
   }
}