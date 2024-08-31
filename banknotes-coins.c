#include <stdio.h>
#include <math.h>

int main()
{
    double n;
    int qtd[12];

    for (int i = 0; i < 12; i++) {
        qtd[i] = 0;
    }

    scanf("%lf", &n);

    // Banknotes
    qtd[0] = (int)n / 100; 
    n = fmod(n, 100);
    qtd[1] = (int)n / 50; 
    n = fmod(n, 50);
    qtd[2] = (int)n / 20; 
    n = fmod(n, 20);
    qtd[3] = (int)n / 10; 
    n = fmod(n, 10);
    qtd[4] = (int)n / 5; 
    n = fmod(n, 5);
    qtd[5] = (int)n / 2; 
    n = fmod(n, 2);

    // Coins
    qtd[6] = (int)n / 1; 
    n = fmod(n, 1);
    qtd[7] = (int)(n / 0.5); 
    n = fmod(n, 0.5);
    qtd[8] = (int)(n / 0.25); 
    n = fmod(n, 0.25);
    qtd[9] = (int)(n / 0.1); 
    n = fmod(n, 0.1);
    qtd[10] = (int)(n / 0.05); 
    n = fmod(n, 0.05);
    qtd[11] = (int)(n / 0.01); 

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