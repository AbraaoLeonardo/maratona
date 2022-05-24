#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seconds, hour=0, minut=0,second=0;
    scanf("%i",&seconds);
    while(seconds !=0){
        if(seconds >= 3600){
            hour = seconds/3600;
            seconds = seconds - 3600*hour;
        }
        else if(seconds >= 60){
            minut = seconds/60;
            seconds = seconds - 60*minut;
        }
        else if(seconds > 0){
            second = seconds;
            seconds = 0;
        }
    }
    printf("%i:%i:%i\n",hour,minut,second);
    return 0;
}
