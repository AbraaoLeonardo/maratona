#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2, n3, n4, average;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    average = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1lf\n",average);

    if(average >= 5 && average <7){
        double exame;
        printf("Aluno em exame.\n");
        scanf("%lf",&exame);
        printf("Nota do exame: %.1lf\n",exame);
        average = (average+exame)/2;
        if(average >= 5){
            printf("Aluno aprovado.\nMedia final: %.1lf\n",average);
            }
        else{
            printf("Aluno reprovado.\nMedia final: %.1lf\n",average);
        }
    }
    else if(average >= 7){
        printf("Aluno aprovado.\n");
    }
    else{
        printf("Aluno reprovado.\n");
    }

    return 0;
}
