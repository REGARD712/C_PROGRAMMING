//python123.io作业题目集

//第五章

//1.求最大值及其下标 
//#include <stdio.h>
//int main()
//{
//    int n,a[10];
//    scanf("%d",&n);
//    int i,max;
//    for(i = 0; i < n ; i ++){
//        scanf("%d",&a[i]);
//    }
//    //用一个新变量记录下标
//    int j;
//    if(n > 1 && n <= 10){
//        //把数组第一个元素赋值给max
//        max = a[0];
//        //遍历数组剩下的元素(1~9号)
//        for(i = 1; i < n ; i ++){
//            //找到比max还大的数
//            //并将其赋值给max
//            if(max < a[i]){
//                max = a[i];
//                j = i;
//            }
//        }
//    }
//    printf("%d %d\n",max,j);
//    
//    return 0;
//}

//2.逆序存放数组并顺序输出 
//#include <stdio.h>
//int main()
//{
//    int n,a[10];
//    scanf("%d",&n);
//    int i;
//    //逆序存放
//    for(i = n - 1; i >= 0; i--){
//        scanf("%d",&a[i]);
//    }
//    //顺序输出
//    for(i = 0; i < n; i++){
//        printf("%d",a[i]);
//        //间隔打印空格
//        //并满足行末无空格
//        if(i != n -1) printf(" ");
//        else break;
//    }
//        
//    return 0;
//}

//3.找出不是两个数组共有的元素 
//#include <stdio.h>
//int main()
//{
//    int N1,N2;
//    int a[20],b[20];
//    int i,j,cnt;
//    
//    //存放第一个数组
//    scanf("%d",&N1);
//    for(i = 0; i < N1; i++){
//        scanf("%d",&a[i]);
//    }
//    //存放第二个数组
//    scanf("%d",&N2);
//    for(i = 0; i < N2; i++){
//        scanf("%d",&b[i]);
//    }
//    //定义第三个数组
//    //用来存放两个数组不共有的数
//    int c[N1+N2];
//    //若存在两个数组共有的元素
//    //用flag来标记
//    int flag;
//    //遍历数组a筛查不同元素
//    for(i = 0; i < N1; i++){
//        //让flag初始化为1
//        //若flag变为0,说明有相同元素
//        flag = 1;
//        for(j = 0; j < N2; j++){
//            //每一个a中的元素逐个与b元素比较
//            if(a[i] == b[j]){
//                flag = 0;
//                break;
//            }
//        }
//        //若flag仍为1
//        //说明该元素是不同的元素
//        if(flag == 1){
//            //将该元素存放进数组c
//            c[cnt] = a[i];
//            cnt++;
//            //表示数组c中的元素个数增加
//        }
//    }
//    //遍历筛查b中的不同元素
//    for(j = 0; j < N2; j++){
//        flag = 1;
//        for(i = 0; i < N1; i++){
//            if(b[j] == a[i]){
//                flag = 0;
//                break;
//            }
//        }
//        if(flag == 1){
//            c[cnt] = b[j];
//            cnt++;
//        }
//    }
//    
//    //先输出c第一个元素
//    printf("%d",c[0]);
//    printf(" ");//为了格式3_
//    //再遍历c剩下的元素
//    for(i = 1; i < cnt; i++){
//        flag = 1;
//        //当找出其中一个元素时
//        //与其他元素比较是否有重复
//        for(j = 0; j < i; j++){
//            //再一次遍历c
//            //直到i的前一项(i-1)为止
//            if(c[i] == c[j]){
//                flag = 0;
//                break;
//            }
//        }
//        if(flag == 1){
//            //若没有重复元素就打印
//            printf("%d",c[i]);
//            if(i != cnt - 1) 
//            printf(" ");//格式间隔
//            else break;
//        }
//    }
//    
//    return 0;
//}

#include <stdio.h>
int main()
{
    int N,letter = 0,blank = 0,digit = 0,other = 0;

    scanf("%d",&N);
    char ch[10];
	getchar();
    int i;
    for(i=0;i<N;i++){
        scanf("%d",&ch[i]);
        if((ch[i] >= 'a' && ch[i] <= 'z')||(ch[i] >= 'A' && ch[i] <= 'Z'))
        letter++;
        else if(ch[i] == ' ') blank++;
        else if(ch[i] >= '0' && ch[i] <= '9') digit++;
        else if(i != N) other++;
        else getchar();
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other);
    
    return 0;
}
