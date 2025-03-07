#include <stdio.h>

int main()
{
    int year,month,date;
    
    while( 3 == scanf("%d %d %d",&year,&month,&date) ){
        switch( month ){
            case 1:
			    if( date >= 1 && date <= 31 ){
                printf("legal\n");break;
            }
                else
                printf("illegal\n");break;
                
            case 2:if( (year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ){/* ÅĞ¶ÏÈòÄê */
                if( date >= 1 && date <= 29 ){/* ÈôÎªÈòÄê */
                    printf("legal\n");break;
                }else{
                    printf("illegal\n");break;
                }
            }else{
                if( date >= 1 && date <= 28 ){/* Èô²»ÎªÈòÄê */
                    printf("legal\n");break;
                }
                else{
                    printf("illegal\n");break;
                }
            }
            
            case 3:
			    if( date >= 1 && date <= 31 ){
                printf("legal\n");break;
            }
                else
                printf("illegal\n");break;
                
            case 4:
			    if( date >= 1 && date <= 30 ){
                printf("legal\n");break;
            }
                else
                printf("illegal\n");break;
                
            case 5:
			    if( date >= 1 && date <= 31 ){
                printf("legal\n");break;
            }
                else
                printf("illegal\n");break;
                
            case 6:
			    if( date >= 1 && date <= 30 ){
                printf("legal\n");break;
            }
                else
                printf("illegal\n");break;
                
            case 7:
			    if( date >= 1 && date <= 31 ){
                printf("legal\n");break;
            }
                else
                printf("illegal\n");break;
                
            case 8:
			    if( date >= 1 && date <= 31 ){
                printf("legal\n");break;
            }
                else
                printf("illegal\n");break;
                
            case 9:
			    if( date >= 1 && date <= 30 ){
                printf("legal\n");break;
            }
                else
                printf("illegal\n");break;
                
            case 10:
			    if( date >= 1 && date <= 31 ){
                printf("legal\n");break;
            }
                else
                printf("illegal\n");break;
                
            case 11:
			    if( date >= 1 && date <= 30 ){
                printf("legal\n");break;
            }
                else
                printf("illegal\n");break;
                
            case 12:
			    if( date >= 1 && date <= 31 ){
                printf("legal\n");break;
            }
                else
                printf("illegal\n");break;
                
            default:printf("illegal\n");break;
        }
    }
    
    return 0;
}
