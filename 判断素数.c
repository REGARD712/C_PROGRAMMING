#include <stdio.h>
int main()
{
	int N;
	int i;
	int flag = 1;
	/* 
	flag=1时代表该数为素数 
	 */
	
	scanf("%d",&N);
	/* 判断N是否为素数 */
	for( i = 2; i < N; i++ ){
		if( N % i == 0 ){
			flag = 0;
			/*
			flag=0时代表该数不为素数 
			 */
		}
	}
	
	if( flag == 1 ){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	return 0;
 } 
