//#include <stdio.h>
//
//void swap(int *pa,int *pb); 
//
//int main()
//{
//	int a = 3;
//	int b = 6;
//	int *pa = &a;
//	int *pb = &b;
//	
//	printf("a = %d, b = %d\n",a,b);
//	swap(pa/*&a*/,pb/*&b*/ );
//	printf("a = %d, b = %d\n",a,b);
//	
//	return 0;
// } 
// 
//void swap(int *pa,int *pb){
//	int t;
//	
//	t = *pa;
//	*pa = *pb;
//	*pb = t;
//	
//}

/* 输入三个数,要求从小到大输出 */
#include <stdio.h>

void exchange(int *p1,int *p2,int *p3);
void swap(int *p1,int *p2);

int main()
{
	int a,b,c;
	int *p1,*p2,*p3;
	
	p1 = &a;
	p2 = &b;
	p3 = &c;
	
	scanf("%d %d %d",&a,&b,&c);
	exchange(p1,p2,p3);
	printf("a = %d, b = %d, c = %d\n",a,b,c);
	
	return 0;
 } 
void exchange(int *p1,int *p2,int *p3){
	if(*p1 > *p2) swap(p1,p2);
	if(*p1 > *p3) swap(p1,p3);
	if(*p2 > *p3) swap(p2,p3);
	
} 
void swap(int *p1,int *p2){
	int t;
	t = *p1;
	*p1 = *p2;
	*p2 = t;
}
