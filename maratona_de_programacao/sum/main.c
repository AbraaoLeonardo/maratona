#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_of_numbers, sum=0, number;
    printf("How many numbers you want to sum? ");
    scanf("%i", &number_of_numbers);
    for(int i=0; i<number_of_numbers; i++){
        printf("Type a number: ");
        scanf("%i", &number);
        sum = sum+number;
    }
    printf("The sum of all number is %i", sum);
    sleep(5);
    return 0;
}
