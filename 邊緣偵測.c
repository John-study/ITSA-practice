#include<stdio.h>
#include<stdlib.h>
int is_edge(int graph[100][100],int j,int k,int n,int m){
    if(graph[j][k]==0){
        return 0;
    }

    //檢查上下左右是否有0
    else if(j>0&&graph[j-1][k]==0 || j<n-1&&graph[j+1][k]==0
    || k>0&&graph[j][k-1]==0 || k<m-1&&graph[j][k+1]==0){ 
        return 1;
    }
    
    return 0;
}
int main(){
    int cases,n,m;
    scanf("%d",&cases);
    for(int i=0;i<cases;i++){
        scanf("%d %d",&n,&m);
        int graph[n][m];

        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                scanf("%d",&graph[n][m]);
            }
        }

        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                if(is_edge(graph,j,k,n,m)){
                    printf("0 ");
                }
                else{
                    printf("_ ");
                }
            }
            printf("\n");
        }
    }
}