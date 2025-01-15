#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    char oper;
    for(int i=0;i<n;i++){
        int a1,a2,b1,b2;
        scanf(" %c %d %d %d %d",&oper,&a1,&a2,&b1,&b2);
        if(oper=='+'){
            printf("%d %d\n",a1+b1,a2+b2);
        }
        else if(oper=='-'){
            printf("%d %d\n",a1-b1,a2-b2);
        }
        else if(oper=='*'){     //(a1+a2i)×(b1+b2i)=(a1×b1−a2×b2)+(a1×b2+a2×b1)i
            int real_part=a1*b1-a2*b2;
            int imag_part=a1*b2+a2*b1;
            printf("%d %d\n",real_part,imag_part);
        }
    }
}