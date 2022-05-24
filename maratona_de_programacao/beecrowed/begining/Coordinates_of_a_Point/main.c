#include <stdio.h>

int main()
{
    double X,Y;
    scanf("%lf %lf",&X,&Y);
    if(Y==90||Y==-90){
        printf("Eixo Y\n");
    }
    if(X==0){
        printf("Eixo X\n");
    }
    if(X>0 && Y>0){
        printf("Q1\n");
    }
    else if(Y>0 && X <0){
        printf("Q2\n");
    }
    else if(Y<0 && X <0){
        printf("Q3\n");
    }
    else if(Y<0 && X >0){
        printf("Q4\n");
    }
    else if(Y==0 && X ==0 || Y == 360 && X == 360){
        printf("Origem\n");
    }
    return 0;
}
