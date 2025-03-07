//while循环语句： 
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}

//for循环语句： 
//#include <stdio.h>
//int main()
//{
//	for(int i = 1;i<=10;i++)
//	{
//		printf("%d\n",i);
//	}
//	return 0;
//}

//if eles if选择分支语句： 
//if(){}
//else if(){}
//else{}

//函数定义与调用 
//#include <stdio.h>
//int main()
//{
//	void print_star();
//	void print_message();
//	
//	print_star();
//	print_message();
//	print_star();
//	
//	return 0;
//}
//
//    void print_star()
//    {
//    	printf("******************\n");
//	}
//	
//	void print_message()
//	{
//		printf(" How do you do!\n");
//	}

//编程题1：{有1、2、3、4这四个数字，能够组成多少个互不相同且无重复数字的三位数？
//要求：（1）四个数字都遍历
//（2）百位十位个位上的数字各不相同 
//（3）请依次输出这些数字
//（4）统计共有多少个数字} 

//#include <stdio.h>
//int main()
//{
//	int a,b,c;
//	int count = 0;
//	for(a=1;a<5;a++)
//	{
//		for(b=1;b<5;b++)
//		{
//			for(c=1;c<5;c++)
//			{
//				if(a!=b&&a!=c&&b!=c)
//				{
					
//					printf("%d%d%d\n",a,b,c);
//					count++;
					
//				}
				
//			} 
			
			
//		}
//	}
//	printf("count = %d\n",count);
//	return 0;
//}
	
//题目2：{企业发放的奖金根据利润提成
//利润小于等于10万元时，奖金可提10%；
//利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%;
//20万到40万之间时，高于20万元的部分，可提成5%；
//40万到60万之间时,高于40万元的部分，可提成3%；
//60万到100万之间时，高于60万元的部分，可提成1.5%；
//高于100万元时，超过100万元的部分按1%提成。 
//输入当月利润，求应发放奖金总数？
//程序分析：请利用数轴来分界，定位。
//注意定义时需把奖金定义成双精度浮点(double)型。}

//#include <stdio.h>
//int main()
//{
//	double bonus;
//	int profit = 0;
//	
//	printf("利润为（万元）:\n");
//	scanf("%d",&profit);
//	
//	int bonus1 = 0.1*10;
//	int bonus2 = bonus1 + 10*0.075;
//	int bonus3 = bonus2 + 20*0.05;
//	int bonus4 = bonus3 + 20*0.03;
//	int bonus5 = bonus4 + 40*0.015;
//	
//	if(profit <= 10)
//	{
//		bonus = 0.1*profit; 
//	}
//	else if(profit <= 20)
//	{
//		bonus = bonus1 + (profit - 10)*0.075;
//	}
//	else if(profit <= 40)
//	{
//		bonus = bonus2 + (profit - 20)*0.05;
//	}
//	else if(profit <= 60)
//	{
//		bonus = bonus3 + (profit - 40)*0.03;
//	}
//	else if(profit <= 100)
//	{
//		bonus = bonus4 + (profit - 60)*0.015;
//	}
//	else
//	{
//		bonus = bonus5 + (profit - 100)*0.01;
//	}
//	 
//	printf("bonus = %.2lf(万元)\n",bonus);
//	return 0;
//}



//求和：1+2+3+4+...+n  

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	printf("n = ");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		sum = sum + i;
//	}
//	
//	printf("总和为%d\n",sum);
//	
//	return 0;
//}


//阶乘

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum;
//	
//	printf("n = ");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){    //若从n开始乘到1：for(i=n;i>0;i--) 
//		sum = sum*i;     //等价于sum *= i;
//	}
//	printf("%d! = %d\n",n,sum);
//	
//	return 0;
//} 

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	double sum = 1.0;   //该数据类型需要初始化，否则会溢出 //相乘初始化为1.0 
//	
//	printf("n = ");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		sum = sum*i;
//	}
//	printf("%d! = %.0lf\n",n,sum);
//	
//	return 0;
//}

////求阶乘序列和

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int c = 1;
//	int sum = 0;
//	
//	printf("n = ");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		c = c*i;
//		sum = sum + c;
//	}
//	printf("n=iΣ^%d = %d\n",n,sum);
//	
//	return 0;
//} 


//#include <stdio.h>
//int main() 
//{
//	int N = 0;
//	int i;
//	int c = 1;
//	int sum = 0;
//	
//	printf("N = ");
//	scanf("%d", &N);
//	
//	for(i=1;i<=N;i++){
//	    c = c*i;
//	    sum = sum + c;
//	}
//	
//	printf("%d\n",sum);
//	return 0;
//}


//#include <stdio.h>
//int main() 
//{
//	int N = 0;
//	int i;
//	int f = 1;
//	int sum = 0;
//	
//	scanf("%d", &N);
//	
//	for(i=1;i<=N;i++){
//	    f *= i;
//	    sum += f;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//输入某年某月某日，判断这一天是这一年的第几天(12.3)
#include <stdio.h>
int main()
{
	int year,month,day;
	scanf("%d %d %d",&year,&month,&day);
	
	if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))//判断该年是否为闰年 
	{
		
	}else{
		
	}
	
	return 0;
} 
 
 




