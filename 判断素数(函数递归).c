#include <stdio.h>

int prime( int N );

int main()
{
	int prime( int N );
	int N;
	
	scanf("%d",&N);
	if( prime( N ) ){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	return 0;
}
int prime( int N ){
	int i;
	for( i = 2; i < N; i++){
		if( N % i == 0 ){
			return 0;
		}else{
			return 1;
		}
	}

}
