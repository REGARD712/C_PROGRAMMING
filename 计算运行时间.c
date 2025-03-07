#include <stdio.h>

int main()
{
    int stp,arv;
    int hh,mm;
    
    while( 2 == scanf("%d %d",&stp,&arv) ){
        if( arv%100 >= stp%100 ){
            hh = arv/100%100 - stp/100%100;
            mm = arv%100 - stp%100;
            printf("%02d:%02d\n",hh,mm);
        }else{
             mm = arv%100+60 - stp%100;
             hh = arv/100%100-1 - stp/100%100;
            printf("%02d:%02d\n",hh,mm);
        }
    }
    
    return 0;
}
