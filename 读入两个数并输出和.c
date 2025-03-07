#include <stdio.h>
int main()
{
    int a = 1,b = 1;
    while(1){//无限循环
        scanf("%d %d",&a,&b);
        if(a == 0 && b == 0) break;//直到a和b为0时停止
        printf("%d\n",a+b);
    }
    
    return 0;
}
