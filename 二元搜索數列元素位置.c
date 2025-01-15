#include<stdio.h>
#include<stdlib.h>

int binarysearch(int input[10],int left,int right,int goal){
    int mind=(left+right)/2;
     if (left>right){
        return -1; 
    }
    else if(input[mind]==goal){
        return mind;
    }
    else if(input[mind]>goal){
        return binarysearch(input,left,mind-1,goal);
    }
    else{
        return binarysearch(input,mind+1,right,goal);
    }
}
int main(){
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int n;
        scanf("%d",&n);
        int input[n];
        for(int j=0;j<n;j++){
            scanf("%d",&input[j]);
        }
        int last=input[n-1];
        
        for(int j=0;j<n-1;j++){
            int min=j;
            for(int k=j+1;k<n;k++){
                if(input[k]<input[min]){
                    min=k;
                }
            }

            if(min!=j){
                int tmp=input[j];
                input[j]=input[min];
                input[min]=tmp;
            }
        }

        for(int j=0;j<n-1;j++){
            printf("%d ",input[j]);
        }
        printf("%d\n",input[n-1]);
        int position=binarysearch(input,0,n-1,last);
        printf("%d %d\n",last,position+1);
    }
}