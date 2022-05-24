#include <stdio.h>

int main() {
    double A,B,C,pi = 3.14159,triangle,circle,trapezium,square,rectangle;
    for(int i=0; i<2; i++){
        scanf("%lf %lf %lf", &A, &B, &C);
        square = B*B;
        rectangle = B*A;
        trapezium = ((A+B)*C)/2;
        triangle = A*C/2;
        circle = C*C*pi;
        printf("TRIANGULO: %.3lf\n",triangle);
        printf("CIRCULO: %.3lf\n",circle);
        printf("TRAPEZIO: %.3lf\n",trapezium);
        printf("QUADRADO: %.3lf\n",square);
        printf("RETANGULO: %.3lf\n",rectangle);
    }
    return 0;
}
