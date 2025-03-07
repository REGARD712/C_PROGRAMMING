#include <stdio.h>

/* 定义结构体 */
struct Student{
	char name[10];
	int age;
	float height;
}; 

int main()
{
	/* 定义一个结构体变量并初始化 */
	struct Student stu1 = { "张三", 20, 1.65f };
	
	/* 通过点运算访问结构体内的成员 */
	printf("  Name：%s\n",stu1.name);
	printf("   Age：%d\n",stu1.age);
	printf("Height：%.2f\n",stu1.height);
	 
	return 0;
}
