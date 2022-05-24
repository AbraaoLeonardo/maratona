#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,s,high;
    scanf("%i %i %i",&a,&b,&s);
    high = ((a+b+abs(a-b)))/2;
    high = ((high+s+abs(high-s)))/2;
    printf("High = %i", high);
    return 0;
}
