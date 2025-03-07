#include <stdio.h>

int gcd( int M,int N );

int main()
{
	int M,N;
	int g,tem;
	
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
	int t = M % N;
	if( t == 0){
		return N;
	}else{
		return gcd(N,t);
	}
}
