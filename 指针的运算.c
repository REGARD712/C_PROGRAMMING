#include <stdio.h>
int main()
{
	int a[] = {10,20,30,40};
	int *p = a + 1;/* *p指向a[1],即20 */
	
	printf("  *p++ = %d\n",*p++);/* 输出*p(20)后指向下一个单元 */
	printf("(*p)++ = %d\n",(*p)++);/* 输出*p后*p(20)加数字1 */
	printf("++(*p) = %d\n",++(*p));/* *p(21)加1后再输出,即22 */
	
	return 0;
 } 
