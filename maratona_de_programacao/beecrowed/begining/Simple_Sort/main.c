#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    scanf("%i %i %i",&num1,&num2,&num3);
    //1 2 3
    if(num1 > num2 && num2 > num3){
        printf("%i\n%i\n%i\n\n",num3,num2,num1);
    }//1 3 2
    else if(num1 > num3 && num2 < num3){
        printf("%i\n%i\n%i\n\n",num2,num3,num1);
    }//2 1 3
    else if(num2>num1 && num1>num3){
        printf("%i\n%i\n%i\n\n",num3,num1,num2);
    }//2 3 1
    else if(num2 > num3 && num1 < num3){
        printf("%i\n%i\n%i\n\n",num1,num3,num2);
    }//3 2 1
    else if(num3>num1 && num2>num1){
        printf("%i\n%i\n%i\n\n",num1,num2,num3);
    }//3 1 2
    else{
        printf("%i\n%i\n%i\n\n",num2,num1,num3);
    }
    printf("%i\n%i\n%i\n",num1,num2,num3);
    return 0;
}
