#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main() {
    int m, n, p;

    scanf( "%d%d", &m, &n );
    for( p = m; p <= n; p ++ ) {
        if( prime( p ) != 0 )
            printf( "%d ", p );
    }
    printf( "\n" );

    printf( "%d\n", PrimeSum( m, n ) );

    return 0;
}

int prime( int p ){
	if(p <= 1){
		return 0;
	}
    int flag = 1;int i;
    for(i = 2; i < p; i++){
        if(i <= 1){
            continue;
        }
        if(p % i == 0){
            flag = 0;
        }
    }
    if(flag == 1){
        return 1;
    }else{
        return 0;
    }
}

int PrimeSum( int m, int n ){
    if(m > n){   // ±£Ö¤ m >= n
        int temp = m;
        m = n;
        n = temp;
    }
    int sum = 0;int i;
    for(i = m; i <= n; i++){
        if(prime(i)){
            sum += i;
        }
    }
    return sum;
}


