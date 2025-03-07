#include <stdio.h>
int main()
{
	int old = 1;
	int middle = 0;
	int young = 0;
	int month = 0;
	int N;
	
	scanf("%d",&N);
	
	/* 题目输出要求: */
	
	if( N == 1 ){
	    printf("1");	
	    return 0;
	}
	
    while( middle < N ){
    	young = old + middle;
	    old = middle;
	    middle = young;
	    month++;
	}
	printf("%d",month);
	
	return 0;
 } 
