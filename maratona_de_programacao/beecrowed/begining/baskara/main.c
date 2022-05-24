#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c,r1, r2, delta;
    scanf("%lf %lf %lf",&a,&b,&c);
    delta = pow((pow(b,2)-4*a*c),0.5);
    r1 =(b*-1-delta)/(2*a);
    r2 =(b*-1+delta)/(2*a);

    if(a ==0 || (pow(b,2)-4*a*c) < 0){
        printf("Impossivel calcular\n");
        return 0;
    }
    printf("R1 = %.5lf\nR2 = %.5lf\n",r2,r1);
    return 0;
}
