#include<stdio.h>

#define MAXN 1000

int main()
{
    int n;
    
    while( scanf("%d",&n) == 1 ){
        int a[MAXN];
        for( int i = 0; i < n; i++ ){
            scanf("%d",&a[i]);
        }
        int max = a[0];
        for( int i = 1; i <= n; i++ ){
            if( a[i] > max ){
                max = a[i];
            }
        }
        printf("%d\n",max);
    }
    
    return 0;
}


#include <stdio.h>

int main()
{
    int n;
    
    while( 1 == scanf("%d",&n) ){
        int i;int max = 0,num;
        for(i = 1; i <= n; i++){
            scanf("%d",&num);
            if(i == 1){
                max = num;
            }else if( max < num ){
                max = num;
            }else{
                continue;
            }
        }
        printf("%d\n",max);
    }
    
    return 0;
}

