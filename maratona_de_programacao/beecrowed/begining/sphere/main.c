#include <stdio.h>


int main()
{
    int R;
    double pi = 3.14159, vol;
    scanf("%i", &R);
    vol = (4*pi*R*R*R)/3;
    printf("Vol = %.3lf",vol);
    return 0;
}
