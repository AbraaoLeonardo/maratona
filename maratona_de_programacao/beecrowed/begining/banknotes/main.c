#include <stdio.h>

int main()
{
    int notas,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    scanf("%i",&notas);
    printf("%i\n",notas);
    while(notas !=0){
        if(notas >=100){
            n100 = notas/100;
            notas = notas-n100*100;
        }
        else if(notas >= 50){
            n50 = notas/50;
            notas = notas-n50*50;
        }
         else if(notas >= 20){
            n20 = notas/20;
            notas = notas-n20*20;
        }
         else if(notas >= 10){
            n10 = notas/10;
            notas = notas-n10*10;
        }
         else if(notas >= 5){
            n5 = notas/5;
            notas = notas-n5*5;
        }
         else if(notas >= 2){
            n2 = notas/2;
            notas = notas-n2*2;
        }
         else if(notas == 1){
            n1 = 1;
            notas = 0;
        }
    }
    printf("%i nota(s) de R$ 100,00\n",n100);
    printf("%i nota(s) de R$ 50,00\n",n50);
    printf("%i nota(s) de R$ 20,00\n",n20);
    printf("%i nota(s) de R$ 10,00\n",n10);
    printf("%i nota(s) de R$ 5,00\n",n5);
    printf("%i nota(s) de R$ 2,00\n",n2);
    printf("%i nota(s) de R$ 1,00\n",n1);
    return 0;
}
