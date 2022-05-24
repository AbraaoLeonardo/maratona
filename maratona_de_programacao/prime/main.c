#include <stdio.h>

int main(){
    int games, low, high;
    printf("How many games? ");
    scanf("%i",&games);
    for(int j = 0; j<games; j++){
        printf("Type the lower and high valuer: ");
        scanf("%i %i", &low,&high);
        for(int i = low; i<high; i++){
            int sum = 0;
            for(int k=2; k<=i; k++){
                if(i%k ==0 && i !=1){
                    sum++;
                }
            }
            if(sum == 1){
                printf("%i\n", i);
                }
        }
    }
    return 0;
}
