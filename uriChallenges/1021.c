#include <stdio.h>

int main(int argc, char const *argv[]) {

    int banknotes,coins;
    double n;

    scanf("%lf", &n);
    banknotes = n;

    coins = (float)((n - banknotes) *100);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", banknotes/100);
    banknotes %= 100;
    printf("%d nota(s) de R$ 50.00\n", banknotes/50);
    banknotes %= 50;
    printf("%d nota(s) de R$ 20.00\n", banknotes/20);
    banknotes %= 20;
    printf("%d nota(s) de R$ 10.00\n", banknotes/10);
    banknotes %= 10;
    printf("%d nota(s) de R$ 5.00\n", banknotes/5);
    banknotes %= 5;
    printf("%d nota(s) de R$ 2.00\n", banknotes/2);
    banknotes %= 2;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", banknotes);
    printf("%d moeda(s) de R$ 0.50\n", coins/50);
    coins = coins%50;
    printf("%d moeda(s) de R$ 0.25\n",coins/25);
    coins = coins%25;
    printf("%d moeda(s) de R$ 0.10\n", coins/10);
    coins = coins%10;
    printf("%d moeda(s) de R$ 0.05\n", coins/5);
    coins = coins%5;
    printf("%d moeda(s) de R$ 0.01\n", coins);
    return 0;
}
