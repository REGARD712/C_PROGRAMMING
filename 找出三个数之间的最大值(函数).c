#include <stdio.h>

int main()
{
    int MultiMax( int a, int b, int c );
    int Max( int a, int b );
    int a,b,c;
    int max;
    
    while( 3 == scanf("%d %d %d",&a,&b,&c) ){
        max = MultiMax( a,b,c );
        printf("%d\n",max);
    }
    
    return 0;
}

int MultiMax( int a, int b, int c ){
    int m;
    m = Max( a,b );
    m = Max( m,c );
    return m;
}

int Max( int a, int b ){
    return a > b ? a : b;
}
