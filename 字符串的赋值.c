#include <stdio.h>
int main()
{
	/* 字符串的正确赋值方式 */
	char str[6] = "hello";
	char str[] = "hello";
	char str[6] = {'h','e','l','l','o','\0'};
	char* str = "hello";
	
	/* 字符串的错误赋值方式 */
	char str[5] = "hello";
	char str[6];str = "hello";
	
	return 0;
}
