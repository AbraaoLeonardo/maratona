#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,Y;
    double price;
    scanf("%i %i",&X,&Y);
    if(X == 1){
        price = 4.00*Y;
    }
    else if(X == 2){
        price = 4.50*Y;
    }
    else if(X == 3){
        price = 5.00*Y;
    }
    else if(X == 4){
        price = 2.00*Y;
    }
    else if(X==5){
        price = 1.50*Y;
    }
    printf("Total: R$ %.2lf",price);
    return 0;
}
