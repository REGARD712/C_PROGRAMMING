#include <stdio.h>

int main()
{
	int a, b, m , n;
	
	scanf("%d%d",&n, &m );//n为总数，m为总腿数 
	
	/* a 为鸡的个数， b为兔的个数 */
	/* a + b = n ==> b = n - a */
	/* 2a + 4b = m ==> a = ( 4 * n - m ) / 2 */
	
	a = ( 4 * n - m ) / 2;
	b = n - a;
	if( m % 2 == 1 || a < 0 || b < 0 ){
		printf("No answer\n");
	}else{
		printf("鸡的个数为%d，兔的个数为%d\n",a,b);
	}
	
	return 0;
}
