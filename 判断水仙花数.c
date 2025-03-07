#include <stdio.h> 
#include <math.h> 
int main()
{
	int n,num,sum,i;
	scanf("%d",&num);
	if(num >= 100 && num <= 999){
		n = num;                    //防止误判 
		while(num != 0){
			sum += pow(num % 10, 3);//调用求幂函数计算每一位数字的立方和 
			num /= 10;              //每次减少一位
		}
		if(sum == n)
		printf("Yes\n");
		else
		printf("No\n");
	} 
	else
	printf("Invalid Value!\n");
	
	return 0;
 } 
