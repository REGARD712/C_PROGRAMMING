/*《题目》 
给出两个正整数 a 和 n（多测试用例） 
求a+aa+aaa+...+aaaaa..a（n个a）之和 
例如，a=2,n=3，结果是 246（ 计算过程：2+22+222=246 ）。
*/ 

//my version 
#include <stdio.h>

int main()
{
    int a,n;
    
    while( 2 == scanf("%d %d",&a,&n) ){
        long long sum = 0;
        long long term = 0;
        int i;
        for( i = 1; i <= n; i++ ){
            term += a;
            sum += term;
            term *= 10;
        }
        printf("%lld\n",sum);
    }
    
    return 0;
}

//DS version
/*
#include <stdio.h>

int main() {
    int a, n;
    while( scanf("%d %d", &a, &n) == 2 ){// 输入a和n
        long long sum = 0;
        long long current = 0;
        int i;
        for (i = 0; i < n; i++) {
            current = current * 10 + a; // 生成当前项
            sum += current;             // 累加到总和
        }
        printf("%lld\n", sum);// 输出结果
    } 
    
     
    return 0;
}
*/
