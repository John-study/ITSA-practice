#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    char input[1000];
    int *ouput;
    fgets(input,sizeof(input),stdin);
    ouput=(int*)calloc(26, sizeof(int));
    for(int i=0;i<strlen(input);i++){
        if(input[i]=='a'||input[i]=='A'){
            ouput[0]++;
        }
        if(input[i]=='b'||input[i]=='B'){
            ouput[1]++;
        }
        if(input[i]=='c'||input[i]=='C'){
            ouput[2]++;
        }
        if(input[i]=='d'||input[i]=='D'){
            ouput[3]++;
        }
        if(input[i]=='e'||input[i]=='E'){
            ouput[4]++;
        }
        if(input[i]=='f'||input[i]=='F'){
            ouput[5]++;
        }
        if(input[i]=='g'||input[i]=='G'){
            ouput[6]++;
        }
        if(input[i]=='h'||input[i]=='H'){
            ouput[7]++;
        }
        if(input[i]=='i'||input[i]=='I'){
            ouput[8]++;
        }
        if(input[i]=='j'||input[i]=='J'){
            ouput[9]++;
        }
        if(input[i]=='k'||input[i]=='K'){
            ouput[10]++;
        }
        if(input[i]=='l'||input[i]=='L'){
            ouput[11]++;
        }
        if(input[i]=='m'||input[i]=='M'){
            ouput[12]++;
        }
        if(input[i]=='n'||input[i]=='N'){
            ouput[13]++;
        }
        if(input[i]=='o'||input[i]=='O'){
            ouput[14]++;
        }
        if(input[i]=='p'||input[i]=='P'){
            ouput[15]++;
        }
        if(input[i]=='q'||input[i]=='Q'){
            ouput[16]++;
        }
        if(input[i]=='r'||input[i]=='R'){
            ouput[17]++;
        }
        if(input[i]=='s'||input[i]=='S'){
            ouput[18]++;
        }
        if(input[i]=='t'||input[i]=='T'){
            ouput[19]++;
        }
        if(input[i]=='u'||input[i]=='U'){
            ouput[20]++;
        }
        if(input[i]=='v'||input[i]=='V'){
            ouput[21]++;
        }
        if(input[i]=='w'||input[i]=='W'){
            ouput[22]++;
        }
        if(input[i]=='x'||input[i]=='X'){
            ouput[23]++;
        }
        if(input[i]=='y'||input[i]=='Y'){
            ouput[24]++;
        }
        if(input[i]=='z'||input[i]=='Z'){
            ouput[25]++;
        }
    }
    for(int i=0;i<25;i++){
        printf("%d ",ouput[i]);
    }
    printf("%d\n",ouput[25]);
}