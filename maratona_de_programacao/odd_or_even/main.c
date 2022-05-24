#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name1[10], name2[10];
    int num1, num2, number_of_play, sum;
    printf("How many plays you want to play? ");
    scanf("%i", &number_of_play);

    printf("Type yours name: ");
    scanf("%s %s",&name1, &name2);
    for(int i=0; i<number_of_play; i++){
        printf("Chose your play: ");
        scanf("%i %i", &num1, &num2);
        sum = num1 + num2;
        if(sum%2 == 0){
            printf("The valuer is %i and the winner is %s\n", sum, name1);
        }
        else{
            printf("The valuer is %i and the winner is %s\n", sum, name2);
        }
    }
    return 0;
}
