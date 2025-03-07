#include <stdio.h>

int gcd( int M, int N );

int main()
{
	int M,N,m,n;
	int t,tem;
	int g;
	
	scanf("%d %d",&M,&N);
	if( M <= 1000 && N <= 1000 ){
		if( M < N ){
			tem = M;
			M = N;
			N = tem;
		}
		g = gcd( M,N );
		printf("%d %d\n",g,M*N/g);
	}
	return 0;
}

int gcd( int M,int N ){
	while( M % N != 0 ){
		int t = M % N;
		M = N;
		N = t;
	}
	return N;
}
