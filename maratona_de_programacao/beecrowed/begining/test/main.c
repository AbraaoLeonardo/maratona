#include <stdio.h>

int main()
{
    double money;
    int coin,notas;
    scanf("%lf",&money);
    notas = money*100;
    coin = notas%100;
    notas = notas/100;
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n",(notas/100));
    notas = notas%100;
    printf("%i nota(s) de R$ 50.00\n",(notas/50));
    notas = notas%50;
    printf("%i nota(s) de R$ 20.00\n",(notas/20));
    notas = notas%20;
    printf("%i nota(s) de R$ 10.00\n",(notas/10));
    notas = notas%10;
    printf("%i nota(s) de R$ 5.00\n",(notas/5));
    notas = notas%5;
    printf("%i nota(s) de R$ 2.00\n",(notas/2));
    notas = notas%2;
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n",(notas/1));
    printf("%i moeda(s) de R$ 0.50\n",coin/50);
    coin = coin%50;
    printf("%i moeda(s) de R$ 0.25\n",coin/25);
    coin = coin%25;
    printf("%i moeda(s) de R$ 0.10\n",coin/10);
    coin = coin%10;
    printf("%i moeda(s) de R$ 0.05\n",(coin/5));
    coin = coin%5;
    printf("%i moeda(s) de R$ 0.01\n",coin/1);
    coin = coin%1;
    return 0;
}
