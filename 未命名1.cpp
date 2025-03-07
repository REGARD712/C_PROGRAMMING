#include <stdio.h>

int main()
{
    int n;
    int sce[10000];
    int i;
    int sec = 0;
    int frt = 0;
    int grd = 0;
    
    scanf("%d",&n);
    for( i = 0; i < n; i++ ){
        scanf("%d",&sce[i]);
        if( sce[i] >= 85 ){
            sec++;
        }else if( sce[i] >= 60 ){
            frt++;
        }else{
            grd++;
        }
    }
    printf("%d %d %d\n",sec,frt,grd);
    
    return 0;
}
