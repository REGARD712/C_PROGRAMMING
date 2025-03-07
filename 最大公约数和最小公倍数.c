#include <stdio.h>
int main()
{
	int M,N,m,n;
	int t;
	int gcd,lcm;
	
	scanf("%d %d",&M,&N);
	if( M <= 1000 && N <= 1000 ){
		if( M < N ){
			int temp = M;
			M = N;
			N = temp;
		}
		
		m = M;
		n = N;
		while( M % N != 0 ){
			t = M % N;
			M = N;
			N = t;
		}
		if( M % N == 0 ){
			gcd = N;
			lcm = ( m * n )/ gcd; 
		}
		printf("%d %d\n",gcd,lcm);
	}
	
	return 0;
 } 

/*
其中，最小公倍数 对 MOD=1000000007 求模：
例如：定义一个变量 lcm，用于计算最小公倍数。
由于在计算 a×b 的过程中，可能会导致超出 int 范围，
所以，可以这样写：1LL*a/gcd*b%MOD;
*/ 
#include <stdio.h>
#define MOD 1000000007
int main()
{
    int a,b;
    
    while( scanf("%d %d",&a,&b) == 2 ){
        if( a == -1 && b == -1 ){
            break;
        }
        long long gcd = 0,lcm = 0;
        long long A,B;
        A = a;B = b;
        if( a < b ){
            int temp = a;
            a = b;
            b = temp;
        }
        while( a % b != 0 ){
            int t = a%b;
            a = b;
            b = t;
        }
        if( a % b == 0 ){
            gcd = b;
            lcm = ( A*B )/gcd;
            lcm = 1LL*A/gcd*B%MOD;
        }
        printf("%lld %lld\n",gcd,lcm);
    }
    
    return 0;
}
