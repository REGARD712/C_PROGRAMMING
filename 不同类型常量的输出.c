#include <stdio.h>

int main() {
    // %o 、%x 分别代表 八进制 和 十六进制 整型数据
    // # 代表输出一个 前导0 或者 前导0x
    printf( "%d, %o, %#o, %x, %#X\n", 34, 34, 34, 34, 34 );
    
    // %lf 代表 实型数据，默认小数位数为 6 位
    printf( "%f, %f\n", 3.1415926, 3141.5926E-3 );
    
    // %c 代表 字符型数据，字符型数据同时也是整型数据
    printf( "%c, %d\n", 'A', 'A' );
    
    // %s 代表 字符串
    printf( "I like programming\n" );
    printf( "%s\n", "I like programming" );
    
    return 0;
}

