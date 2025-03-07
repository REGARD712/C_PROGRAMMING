#include <stdio.h>
int main()
{
	int a = 123;
	
	while( a != 0 ){
		printf("%d",a%10);
		a /= 10;
	}
	
	return 0;
}
