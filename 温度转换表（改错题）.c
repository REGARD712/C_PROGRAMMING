#include <stdio.h>
int main()
{
	int fahr,lower,upper;
	double celsius;
	
	printf("Enter lower:");
	scanf("%d",&lower);
	printf("Enter upper:");
	scanf("%d",&upper);
	if(lower > upper){
		printf("Invalid.\n");
	}
	else{
		printf("fahr celsius\n");//打印表头
		//温度转换
		for(fahr = lower; fahr <= upper; fahr+=2){
		    celsius = 5.0/9*(fahr - 32);
			printf("%d%6.1lf\n",fahr,celsius);	
		}
		 
	}
	
	return 0;
}
