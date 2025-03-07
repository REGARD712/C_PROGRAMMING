#include <stdio.h>

int main()
{
    double score,sum = 0.0;
    int i = 0,count = 0;
    
    while(1){
        scanf("%lf",&score);
        if(-1 == score){
            break;
        }
        sum += score;
        i++;
        if(score < 60){
            count++;
        }
    }
    double aver = 1.0 * sum / i;
    printf("%.1lf %d\n",aver,count);
    
    return 0;
}
