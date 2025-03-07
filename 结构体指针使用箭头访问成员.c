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
	
	/* 定义指向结构体的指针 */
	struct Student *ptr = &stu1;
	
	/* 通过箭头运算访问结构体内的成员 */
	printf("  Name：%s\n",ptr->name);
	printf("   Age：%d\n",ptr->age);
	printf("Height：%.2f\n",ptr->height);
	
	/* 修改成员的值 */
	ptr->age = 31;
	printf("   Age：%d\n",ptr->age);
	 
	/* (*p)相当于stu1,可通过点运算访问结构体内的成员 */ 
	printf("  Name：%s\n",(*ptr).name);
	printf("   Age：%d\n",(*ptr).age);
	printf("Height：%.2f\n",(*ptr).height);
	 
	return 0;
}
