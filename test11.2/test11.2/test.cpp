#include <stdio.h>
int main() {
    int lower,upper;
    scanf("%d %d",&lower,&upper);
    if(lower>upper||lower<0||upper>100){
    	printf("Invalid Value!\n");
	}
	printf("fahr celsius\n");
	int fahr = lower;
    while(fahr<=upper)
    {
    	float celsius = 5*(fahr - 32)/9.0;
    	printf("%d %6.lf\n",fahr,celsius);
    	fahr++;
	}
    	
    return 0;
}
