#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days,year=0,month=0,day=0;
    scanf("%i",&days);
    while(days != 0){
        if(days>=365){
            year = days/365;
            days = days-year*365;
        }
        else if(days >= 30){
            month = days/30;
            days = days-month*30;
        }
        else if(days >0){
            day = days;
            days = 0;
            break;
        }
    }
    printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n",year,month,day);
    return 0;
}
