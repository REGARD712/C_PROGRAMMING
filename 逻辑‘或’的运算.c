#include <stdio.h>
//或运算 || 的执行顺序：先运算 左表达式 ，只有当 左表达式 为假时，才执行 右表达式
int main() {
    int a, b, c, d;

    a = 5;
    b = 6;
    d = ( a >= 8 ) || ( b = 19 ) < 90;
    printf( "d=%d , b=%d\n", d, b );

    a = 5;
    b = 6;
    d = ( a >= 4 ) || ( b = 19 ) < 90;
    printf( "d=%d , b=%d", d, b );

    return 0;
}

