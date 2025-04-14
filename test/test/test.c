#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num > 0)
	{
		if (num % 2 == 0)
		{
			printf("%d是偶数\n", num);
		}
		else
		{
			printf("%d是奇数\n", num);
		}
	}
	else
	{
		printf("非奇数\n");
	}

	return 0;
}














