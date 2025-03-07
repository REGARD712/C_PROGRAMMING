#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( ) {
    /// srand() 在 cstdlib.h 中定义的。作用是扰乱随机数池
    srand( (unsigned int)time( NULL ) ); /// time()在 time.h 中定义。用当前时间 time() 作为随机数种子
    
    int num = rand() % 100 + 1; /// rand()是获得一个随机数。 生成 [1, 100] 之间的一个随机数
    
    int guess = -1;  /// 你猜的数。初始是一个不可能的数，使得能够进入 while 循环
    
    /// 范围提示
    int lower = 1;
    int upper = 100;
    
    printf( "between %d and %d\n", lower, upper );
    
    while( guess != num ) { /// 只要没猜中，就继续循环
    
        scanf( "%d", &guess );  /// 读入你猜的数
        
        if( guess == num )  /// 如果猜中了，跳出循环
            break;

        if( guess < num ) { /// 如果猜小了，更新 下界
            lower = guess;
            printf( "between %d and %d\n", lower, upper );
        }
        else{ /// 否则就是猜大了，更新 上界
            upper = guess;
            printf( "between %d and %d\n", lower, upper );
        }
    }
    
    printf( "great! the number is  %d\n", num );
    
    return 0;
}

