#include <stdio.h>

int main()
{
    long long power( int x );
    int n;
    int i;
    long long rst = 0;
    
    while( 1 == scanf("%d",&n) ){
        if( n <= 50 ){
            for( i = 1; i <= n; i++ ){
                rst += power(i);
            }
            printf("%lld\n",rst);
            rst = 0; 
        }
    }
    
    return 0;
}

long long power( int x ){
    int i;
    long long rst = 1;
    
    for( i = 1; i <= x; i++ ){
        rst *= 2;
    }
    return rst;
}
