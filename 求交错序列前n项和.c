#include <stdio.h>
int main()
{
	int n,i;
	int fz = 0,fm = 0;
	int flag = 1;
	double sum = 0.0;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		fz ++;              //计算分子 
		fm = 2*i-1;          //计算分母 
		sum += 1.0*flag*fz/fm;
		flag = -flag;         //改变正负号 
	}
	printf("sum = %.3lf\n",sum);
	
	
	return 0;
}
