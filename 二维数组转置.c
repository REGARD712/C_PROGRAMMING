#include <stdio.h>
int main()
{
	int a[3][4] = { { 1,2,3,4 },
	                { 5,6,7,8 },
					{ 9,10,11,12 } };
	int b[4][3]; 
	int i,j;
	
	/* i控制行j控制列 */
	printf("转置前：\n");
	for( i = 0; i < 3; i++ ){
		for( j = 0; j < 4; j++ ){
			printf("%4d",a[i][j]);
			b[j][i] = a[i][j];/* 进行赋值 */
		}
	    printf("\n");
	}
	
	printf("转置后：\n");
	for( i = 0; i < 4; i++ ){
		for( j = 0; j < 3; j++ ){
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
 } 
