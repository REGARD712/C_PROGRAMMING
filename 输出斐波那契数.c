#include <stdio.h>

int main()
{
    int n;
    
    while( 1 == scanf("%d",&n) ){
        int i;
        if( n >= 1 ){
            int f1 = 1;//第一项
            printf("%d ",f1);
        }
        if( n >= 2 ){
            int f2 = 1;//第二项
            printf("%d ",f2);
        }
        int former = 1;
        int pre_former = 1;
        for( i = 3; i <= n; i++ ){
            int current = former + pre_former;//前两项相加
            printf("%d ",current);//输出后一项
            //更新前两项
            pre_former = former;
            former = current;
        }
        printf("\n");
    }
    
    return 0;
}
