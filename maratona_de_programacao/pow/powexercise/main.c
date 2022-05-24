#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num, pow;
    printf("Type a number: ");
    scanf("%lf", &num);
    pow = num * num;
    printf("\nThe double of %lf is: %lf",num, pow);
    sleep(5);
    return 0;
}
