#include <stdio.h>
#include <stdlib.h>

int main() {

int arr[6];
for(int i=0;i<6;i++){
    scanf("%d",&arr[i]);
}
for(int j=5;j>0;j--){
    printf("%d ",arr[j]);
}
printf("%d\n",arr[0]);

}