#include <stdio.h>

int main()
{
	int n;
	
	scanf("%d",&n);//520
	
	/* 法一 */
	printf("%d%d%d\n", n%10, n/10%10, n/100 );//025
	
	/* 法二 */
	int m;
	m = ( n%10 ) * 100 + ( n/10%10 ) * 10 + ( n/100 );
	printf("%03d\n",m);//025
	
	return 0;
 } 
