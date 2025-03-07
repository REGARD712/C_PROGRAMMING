#include <stdio.h>

int main()
{
	int a,b,t;
	
	scanf("%d %d",&a,&b);
	t = a;
    a = b;
    b = t;
    printf("a = %d, b = %d\n",a,b);
	
 	/* 理解即可 */
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d, b = %d\n",a,b);

	/* 竞赛最佳 */
	printf("a = %d, b = %d\n",b,a);
	
	return 0;
 } 
