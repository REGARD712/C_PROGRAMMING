//分支结构语句
//if语句+switch语句

//if语句：
//1、if（判断条件）{} 
//2、if（）{}  else{}
//3、if（）{}  else if（）{}  else{}

//switch语句：
//switch（判断对象）
//{
//  case 常量表达式：执行语句；
//  break；
//  default：执行语句；
//  break； 
//} 

//循环结构语句：
//while语句、for语句、do while语句

//while语句：
//while(循环条件)
//{  循环语句；
//   循环执行后的操作语句； 
//   break(跳出循环)/continue(结束该语句后面的语句)； 
//} 

//for语句：
//for(初始条件；循环条件；循环执行后的操作语句)
//{
//  循环语句；
//}

//do while语句：
// 

//将有符号整型数据赋值给无符号整型变量
//#include <stdio.h>
//int main()
//{
//	unsigned short int a;
//	short int b;
//	
//	b = -1;
//	a = b;
//
//	printf("%u\n",a);
//	
//	return 0;
// } 

//将无符号整型数据赋值给有符号整型变量
//#include <stdio.h>
//int main()
//{
//	unsigned short int a;
//	short int b;
//
//	a = 65535;
//	b = a;
//
//	printf("%d\n",b);
//
//	return 0;
//}

//查询数据类型的字节数
//#include <stdio.h>
//int main()
//{
//	printf("%d,%d,%d,%d\n",sizeof(int),sizeof(short),sizeof(long),sizeof(long long));
//	printf("%d,%d\n",sizeof(float),sizeof(double));
//	
//	return 0;
// } 

//数据的溢出
//#include <stdio.h>
//int main()
//{
//	unsigned char x = 255;
//	x = x + 1;
//	
//	printf("%d\n",x);//打印出来的数值是0 
//	//其原因是：
//	//char类型数据只有8位，255的二进制是11111111，加1就变成了100000000 
//	//         11111111
//	//        100000000
//	//        "1"是溢出位，会被舍去 
//	return 0;
// } 

//二维数组—矩阵转置(11.20) 
//#include <stdio.h>
//int main()
//{
//	int i,j;
//	int a[2][3]={{1,2,3},{4,5,6}};
//	int b[3][2];
//	
//	printf("array a:\n");
//	for(i=0;i<2;i++){
//		for(j=0;j<3;j++){
//			printf("%5d",a[i][j]);
//			b[j][i]=a[i][j];
//		}
//		printf("\n");
//	} 
//	
//	printf("array b:\n");
//	for(i=0;i<3;i++){
//		for(j=0;j<2;j++){
//			printf("%5d",b[i][j]);
//		}
//		printf("\n");
//  }
//    return 0;
//}
	
//例7.3:输入4个整数，找出其中最大的数，用一个函数来实现(12.4) 
//#include <stdio.h>
//int max_4(int a,int b,int c,int d);
//int main()
//{
//	int a,b,c,d;
//	printf("Please enter 4 integer numbers:");
//	scanf("%d %d %d %d",&a,&b,&c,&d);
//	printf("max = %d\n",max_4(a,b,c,d));
//	
//	return 0;
//}
//
//int max_4(int a,int b,int c,int d){
//	int max(int,int);
//	int m;
//	m = max(a,b);
//	m = max(m,c);
//	m = max(m,d);
//	return m;
//}
//
//int max(int x,int y){
//	return x>y?x:y;
//}	
	
//例7.4:有五个学生，第一个10岁，其后学生的岁数依次比他大两岁，问第五个学生多大？(12.4)	
//#include <stdio.h>
//int age(int n){
//	int a;
//	if(n==1) a = 10;
//	else a = age(n-1)+2;  //递归 
//	return a;
//}
//
////int main()
////{
////	printf("%d\n",age(5));
////	
////	return 0;
////}
//
////查询五人中任意一个人的年龄： 
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	
//	if(a > 0 && a < 6)  //限定人数为1~5
//	{ 
//		printf("%d\n",age(a));
//	}
//	else
//	{
//		printf("Invalid value!\n");  //超出人数限制的输入将被判定为无效数值 
//	}
//	
//	return 0;
//}

//格式输入输出(12.21)
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	
//	//输入
//	scanf("%4d%2d%2d",&year,&month,&date);//输入的字符宽度分别为4，2，2 
//	//输出
//	printf("year=%d\n",year);
//	printf("month=%02d\n",month);//以2字符的格式输出，若为一位数用0补齐 
//	printf("date=%d\n",date); 
//	 
//	return 0;
//} 


//学生成绩的输入输出:输入学号、三科成绩 
//#include <stdio.h>
//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	
//	//输入
//	scanf("%d;%f,%f,%f",&id,&c,&math,&eng);
//	//输出
//	printf("The each subject of No. %d is %.2f, %.2f, %.2f.\n",id,c,math,eng);
//	 
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d",n);
//	
//	return 0;
//}

//输出等差数列，首项和公差分别为8,2
//#include <stdio.h>
//int main()
//{
//	int sum(int a);
//	int a = 2;
//	int i;
//	for(i=0;i<5;i++){
//		printf("%d ",sum(a));
//	}
//	
//	return 0;
// } 
// 
//int sum(int a){
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a+b+c);
//}
 
//输出以下内容：
//printf("Hello world!\n");
//cout<<"Hello world!"<<endl;
//#include <stdio.h>
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout<<\"Hello world!\"<<endl;");//转义字符的使用 
//	
//	return 0;
//}

//找最大值
//(数组法) 
//#include <stdio.h>
//int main() {
//    int i,a[4];
//    for(i=0;i<4;i++){
//        scanf("%d",&a[i]);
//    }
//    
//    int max = a[0];
//    for(i=1;i<4;i++){
//        int t;
//        if(max<a[i]){
//            t = max;
//            max = a[i];
//            a[i] = t;
//        }
//    }
//    printf("%d\n",max);
//    return 0;
//}
//(普通法) 
//#include <stdio.h>
//int main()
//{
//	int i,max = 0;
//	int n = 0;
//	
//	scanf("%d",&max);
//	for(i=1;i<4;i++){
//		scanf("%d",&n);
//		if(n>max) max = n;
//	}
//	printf("%d",max);
//	
//	return 0;
// } 

//冒泡排序算法(12.23)
//#include<stdio.h>
// 
//// 冒泡排序函数
//void bubbleSort(int arr[], int n) {
//    int i, j, temp;
//    for (i = 0; i < n - 1; i++) 
//    //外层循环控制排序的轮数，每一轮都会将当前未排序部分的最大元素移动到末尾，并减少一轮循环
//    {
//        for (j = 0; j < n - i - 1; j++) 
//        // 内层循环负责比较和交换相邻的元素
//        {
//            if (arr[j] > arr[j + 1]) // 如果当前元素大于下一个元素，则进行交换
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
// 
//// 打印数组函数
//void printArray(int arr[], int size) {
//    int i;
//    // 遍历数组并打印每个元素
//    for (i = 0; i < size; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//}
// 
//// 主函数，用于测试冒泡排序
//int main() {
//    int arr[] = {64, 34, 25, 12, 22, 11, 90};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    
//    bubbleSort(arr, n);// 调用冒泡排序函数对数组进行排序
//    printf("Sorted array: \n");
//    printArray(arr, n);// 调用打印数组函数输出排序后的数组
//    return 0;
//}

//选择排序算法(12.23)
//#include <stdio.h>
// 
//// 选择排序函数
//void selectionSort(int arr[], int n) {
//    int i, j, minIndex, temp;
//    
//    for (i = 0; i < n - 1; i++) 
//    // i 用于标记已排序部分的边界，从数组的第一个元素开始，直到数组中倒数第二个元素
//    {
//        
//        minIndex = i;// 假设当前位置 i 为最小元素
//        for (j = i + 1; j < n; j++) 
//        // j 从 i 的下一个位置开始遍历到数组末尾，寻找真正的最小元素
//        {
//            if (arr[j] < arr[minIndex])
//            // 如果当前遍历到的元素比当前标记的最小元素要小，则更新最小元素
//            {
//                minIndex = j;
//            }
//        }
//        
//        if (minIndex!= i) 
//        // 如果标记的最小元素不是当前 i 的位置，说明找到了更小的元素，进行交换
//        {
//            temp = arr[i];
//            arr[i] = arr[minIndex];
//            arr[minIndex] = temp;
//        }
//    }
//}
// 
//// 打印数组函数
//void printArray(int arr[], int size) {
//	int i;
//    for (i = 0; i < size; i++)
//        // 逐个打印数组中的元素，元素之间用空格分隔
//        printf("%d ", arr[i]);
//    // 打印完一行数组元素后换行
//    printf("\n");
//}
// 
//int main() {
//    int arr[] = {64, 25, 12, 22, 11};
//    int n = sizeof(arr) / sizeof(arr[0]);
// 
//    // 打印提示信息和未排序的数组
//    printf("排序前的数组为：");
//    printArray(arr, n);
// 
//    // 调用选择排序函数对数组进行排序
//    selectionSort(arr, n);
// 
//    // 打印提示信息和排序后的数组
//    printf("排序后的数组为：");
//    printArray(arr, n);
// 
//    return 0;
//} 
//
//#include <stdio.h>
// 
//// 优化的选择排序函数
//void selectionSortOptimized(int arr[], int n) {
//    int left = 0; // 指向待排序区间的左端
//    int right = n - 1; // 指向待排序区间的右端
//    int minIndex, maxIndex, temp;
// 
//    // 当左端小于右端时进行排序，确保至少有两个元素待排序
//    while (left < right) {
//        minIndex = left; // 初始假设左端的元素为最小元素的索引
//        maxIndex = left; // 初始假设左端的元素为最大元素的索引
// 
//        // 遍历当前待排序区间，寻找最小和最大元素的索引
//        for (int i = left; i <= right; i++) {
//            if (arr[i] < arr[minIndex]) {
//                minIndex = i; // 更新最小元素索引
//            }
//            if (arr[i] > arr[maxIndex]) {
//                maxIndex = i; // 更新最大元素索引
//            }
//        }
// 
//        // 如果最小元素不在左端，则交换左端元素和最小元素
//        if (minIndex!= left) {
//            temp = arr[minIndex];
//            arr[minIndex] = arr[left];
//            arr[left] = temp;
//        }
// 
//        // 如果最大元素此时在左端（因为交换了最小元素到左端）
//        if (maxIndex == left) {
//            maxIndex = minIndex; // 更新最大元素索引为之前的最小元素索引
//        }
// 
//        // 如果最大元素不在右端，则交换右端元素和最大元素
//        if (maxIndex!= right) {
//            temp = arr[maxIndex];
//            arr[maxIndex] = arr[right];
//            arr[right] = temp;
//        }
// 
//        // 缩小待排序区间
//        left++;
//        right--;
//    }
//}
// 
//// 打印数组函数
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//}
// 
//int main() {
//    int arr[] = {98, 56, 23, 77, 11};
//    int n = sizeof(arr) / sizeof(arr[0]);
// 
//    printf("排序前的数组为：");
//    printArray(arr, n);
// 
//    selectionSortOptimized(arr, n);
// 
//    printf("排序后的数组为：");
//    printArray(arr, n);
// 
//    return 0;
//}


