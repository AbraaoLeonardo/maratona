#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km;
    double fuel, travel;
    for(int i=0; i<3; i++){
        scanf("%i %lf",&km,&fuel);
        travel = km/fuel;
        printf("%.3lf km/l\n",travel);
    }
    return 0;
}
