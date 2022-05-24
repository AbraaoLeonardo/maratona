#include <stdio.h>

int main() {
    int cod1, cod2, num1, num2;
    double price1, price2, sell;
    scanf("%i %i %lf",&cod1,&num1,&price1);
    scanf("%i %i %lf",&cod2,&num2,&price2);
    sell = num1*price1+num2*price2;
    printf("VALOR A PAGAR: R$ %.2lf",sell);
    return 0;
}
