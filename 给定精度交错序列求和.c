/*
求给定精度的简单交错序列部分和
编写程序，计算序列部分和 1 - 1/4 + 1/7 - 1/10 + 1/13 - 1/16...
直到最后一项的绝对值不大于给定精度 eps 。
输入描述:多测试用例，一个测试用例一行：一个正实数 eps 
输出描述:一个测试用例一行结果：部分和的值，精确到小数点后 8 位。
题目保证计算结果不超过双精度范围。
*/

#include <stdio.h>

int main()
{
    double eps = 0.0,sum = 0.0,fm = 0.0,term = 0.0;
    int i = 1,flag = 1;
    
    while( 1 == scanf("%lf",&eps) ){
        do{
            fm = 3.0 * i - 2.0;
            term = (flag * 1.0) / fm;
            sum += term;
            flag = -flag;
            i++;
        }while( term > eps || term < -eps );// |term| > eps
        printf("%.8lf\n",sum);
    }
    
    return 0;
}
