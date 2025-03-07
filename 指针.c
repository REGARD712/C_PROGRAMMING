#include <stdio.h>

void f(int *p);

int main()
{
	int a = 6;
	printf("&a = %p\n",&a);
	f(&a);
	
	return 0;
 } 
 
 void f(int *p){
 	printf("p = %p\n",p);
 	printf("*p = %d\n",*p);
	 *p = 26; 
 }

/*指针应用:互换*/ 
#include <stdio.h>

void swap(int *a,int *b);
int main()
{
	int a = 5;
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

/* 指针应用:找最大最小值 */
#include <stdio.h>

void minmax(int a[],int len,int *min,int *max);

int main()
{
	int a[] = {1,9,8,5,6,12,20,7,10,24,55};
	int min,max;
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("min = %d, max = %d\n",min,max);
	
	return 0;
 } 

void minmax(int a[],int len,int *min,int *max){
	int i;
	*min = *max = a[0];
	for(i = 1; i < len; i++){
		if(a[i] < *min)
		*min = a[i];
		if(a[i] > *max)
		*max = a[i];
	}
}

/* 指针的应用:遍历数组 */
#include <stdio.h>
int main()
{
	int a[] = {0,1,2,3,4,5,6,7,8,9,-1};
	int *p = a;
	
	/* for循环遍历 */
	for( p = a; *p != -1; p++ ){
		printf("%d ", *p );
	}
	
	return ;
}
