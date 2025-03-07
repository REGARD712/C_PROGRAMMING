#include <stdio.h>

int main()
{
    int min;
    double s = 0.0;
    double s0 = 0.0;
    double cost = 0.0;
    
    scanf("%lf %d",&s, &min);
	if( s > 0 && s <= 3 ){
        cost = 10;
    }else if( s <= 10 ){
        cost = 10 + ( s - 3 ) * 2.0;
	}else{
        s0 = s - ( s - 10.0 ) ;
        cost = 10 + ( s - 10 ) * 3.0 + ( s0 - 3 ) * 2.0;
    }
    
    if( min >= 5 ){
        cost = cost + 2.0 * ( min / 5 );
    }else{
    
	}
	
    printf("%.0lf",cost);    
    
    return 0;
}
