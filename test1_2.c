#include <stdio.h>

int main() {
    int n;
    while (1 == scanf("%d", &n)) {
        if (n >= 0 && n <= 600) {
            double e = 1.0;
            double factorial = 1.0;
            for (int i = 1; i <= n; i++) {
                factorial /= i;  // µÝÍÆ¼ÆËã1/i!
                e += factorial;
            }
            printf("%.16lf\n", e);
        }
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int n,i;
    long long int jc = 1;
    long double e = 1.0;
    
    while( 1 == scanf("%d",&n) ){
        if(n >= 0 && n <= 600){
            for(i = 1; i <= n; i++){
                jc *= i;
                e += 1.0 / jc;
            }
            printf("%.16Lf\n",e);
            jc = 1;
            e = 1.0;s
        }
    }
    
    return 0;
}
