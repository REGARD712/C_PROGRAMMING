#include <stdio.h>
//与运算 && 的执行次序： 计算左表达式，仅当其结果为真时，才计算 右表达式
int main() {
    int a, b, c, d;
    a = 5;
    b = 6;
    c = ( a <= 8 ) && ( b = 7 ) > 5;
    printf( "c=%d , b=%d\n", c, b );
    a = 5;
    b = 6;
    c = ( a <= 4 ) && ( b = 7 ) > 5;
    printf( "c=%d , b=%d", c, b );
    return 0;
}

