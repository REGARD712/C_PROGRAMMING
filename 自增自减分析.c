#include <stdio.h>

int main() {
    int a, b, c;

    a = 7; b = 2;
    c = ++ a + b;
    printf( "#1  c = %d , a = %d , b = %d\n", c, a, b );
    a = 7; b = 2;
    c = a ++ + b;
    printf( "#2  c = %d , a = %d , b = %d\n", c, a, b );

    a = 7; b = 2;
    c = a ++ + ++ b;
    printf( "#3  c = %d , a = %d , b = %d\n", c, a, b );

    a = 7; b = 2;
    c = ++ a + ++ b;
    printf( "#4  c = %d , a = %d , b = %d\n", c, a, b );

    a = 7; b = 2;
    c = ++ a + ++ b;
    printf( "#5  c = %d , a = %d , b = %d\n", c, ++ a, b ++ );

    a = 7; b = 2;
    c = ++ a + b ++;
    printf( "#6  c = %d , a = %d , b = %d\n", c, ++ a, b ++ );

    return 0;
}

