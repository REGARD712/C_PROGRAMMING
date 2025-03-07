#include <stdio.h>
#define ADD(a,b) a+b/* ¼Ó·¨ */
#define PLUS(a,b) a*b/* ³Ë·¨ */

int main()
{
	int a = 10;
	int b = 15;
	int rst1 = ADD(a,b);
	int rst2 = PLUS(a,b);
	
	printf("rst1 = %d\n",rst1);
	printf("rst2 = %d\n",rst2);
	
	return 0;
 } 
