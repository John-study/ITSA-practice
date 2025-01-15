#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int *arry;
        arry=(int *)malloc(sizeof(int)*n);
        for(int i=0;i<n;i++){
            scanf("%d",&arry[i]);
        }
        //選擇排序
        for(int i=0;i<n;i++){
            int min=i;
            for(int j=i+1;j<n;j++){
                if(arry[j]<arry[min]){
                    min=j;
                }
            }

            if(min!=i){
                int tmp=arry[i];
                arry[i]=arry[min];
                arry[min]=tmp;
            }
        }

        for(int i=0;i<n-1;i++){
            printf("%d ",arry[i]);
        }
        printf("%d\n",arry[n-1]);
    }
}