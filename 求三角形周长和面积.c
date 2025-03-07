#include <stdio.h>
#include <math.h>

int main()
{
    double x1,y1,x2,y2,x3,y3;
    double a,b,c;
    double zc = 0.0;
    double s = 0.0;
    double area = 0.0;
    
    while( 6 == scanf("%lf %lf %lf %lf %lf %lf",&x1, &y1, &x2, &y2, &x3, &y3 ) ){
    a = sqrt( pow( x1 - x2, 2 ) + pow( y1 - y2, 2 ) );
    b = sqrt( pow( x1 - x3, 2 ) + pow( y1 - y3, 2 ) );
    c = sqrt( pow( x2 - x3, 2 ) + pow( y2 - y3, 2 ) );
    if( a + b > c && a + c > b && b + c > a ){
        zc = 1.0 * ( a + b + c );
        s = ( a + b + c ) / 2.0;
        area = sqrt( s * ( s - a ) * ( s - b ) * ( s - c ) );
        printf("%.2lf %.2lf\n",zc,area);
    }else{
        printf("Impossible\n");
    }
    }
    
    return 0;
}
