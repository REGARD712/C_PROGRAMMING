#include <stdio.h>

void swap(int *a,int *b); 

int main()
{
	int a = 3;
	int b = 6;
	
	printf("a = %d, b = %d\n",a,b);
	swap(&a,&b);
	printf("a = %d, b = %d\n",a,b);
	
	return 0;
 } 
 
void swap(int *pa,int *pb){
	int t;
	
	t = *pa;
	*pa = *pb;
	*pb = t;
	
} 
