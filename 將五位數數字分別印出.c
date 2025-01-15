#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char input[7];
    while (fgets(input,sizeof(input),stdin)!=NULL){
        input[strcspn(input,"\n")]=0;  
        for(int i=0;i<4;i++){
            printf("%c   ",input[i]);
        }
        printf("%c\n",input[4]);
    }
    
}
