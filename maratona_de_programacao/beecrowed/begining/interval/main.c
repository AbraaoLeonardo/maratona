#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num;
    scanf("%lf",&num);
    if(num <0 || num>100){
        printf("Fora de intervalo\n");
    }
    //if we chage to 0<=num<=25 == 0<=num || num<=25
    else if(0 <= num && num <= 25){
        printf("Intervalo [0,25]\n");
    }
    else if(num <= 50){
        printf("Intervalo (25,50]\n");
    }
    else if(num <= 75){
        printf("Intervalo (75,100]\n");
    }
    else if(num <= 100){
        printf("Intervalo (75,100]\n");
    }
    return 0;
}
