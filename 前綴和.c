#include <stdio.h>
#include <stdlib.h>

int main(){
    long long n;
    scanf("%lld",&n); 
    
    long long *a=(long long *)malloc(n * sizeof(long long));
    long long *b=(long long *)malloc(n * sizeof(long long));
    
    for (long long i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }

    b[0] = a[0];
    
    for (long long i=1;i<n;i++){
        b[i]=b[i-1]+a[i];
    }
    
    for (long long i=0;i<n-1;i++){
        printf("%lld ",b[i]);
    }
    printf("%lld\n",b[n-1]);
    free(a);
    free(b);
}
