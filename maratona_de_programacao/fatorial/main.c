#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, result = 1;
    printf("Type the number, and we will factory they: ");
    scanf("%i", &x);
    for(int i=1; i<x+1; i++){
        result = result * i;
    }
    printf("%i",result);
    sleep(3);
    return 0;
}
