#include <stdio.h>

int main()
{
    double nDouble;
    int n;
    int qtd[12];

    for (int i = 0; i < 12; i++) {
        qtd[i] = 0;
    }

    scanf("%lf", &nDouble);
    n = (int)(nDouble * 100);

    // Banknotes
    qtd[0] = n / 10000;
    n = n % 10000;
    qtd[1] = n / 5000;
    n = n % 5000;
    qtd[2] = n / 2000;
    n = n % 2000;
    qtd[3] = n / 1000;
    n = n % 1000;
    qtd[4] = n / 500;
    n = n % 500;
    qtd[5] = n / 200;
    n = n % 200;

    // Coins
    qtd[6] = n / 100;
    n = n % 100;
    qtd[7] = n / 50;
    n = n % 50;
    qtd[8] = n / 25;
    n = n % 25;
    qtd[9] = n / 10;
    n = n % 10;
    qtd[10] = n / 5;
    n = n % 5;
    qtd[11] = n;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", qtd[0]);
    printf("%d nota(s) de R$ 50.00\n", qtd[1]);
    printf("%d nota(s) de R$ 20.00\n", qtd[2]);
    printf("%d nota(s) de R$ 10.00\n", qtd[3]);
    printf("%d nota(s) de R$ 5.00\n", qtd[4]);
    printf("%d nota(s) de R$ 2.00\n", qtd[5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", qtd[6]);
    printf("%d moeda(s) de R$ 0.50\n", qtd[7]);
    printf("%d moeda(s) de R$ 0.25\n", qtd[8]);
    printf("%d moeda(s) de R$ 0.10\n", qtd[9]);
    printf("%d moeda(s) de R$ 0.05\n", qtd[10]);
    printf("%d moeda(s) de R$ 0.01\n", qtd[11]);

    return 0;
}