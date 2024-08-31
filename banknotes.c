#include <stdio.h>

int main()
{
    int n, qtd[7];
    qtd[0] = 0;
    qtd[1] = 0;
    qtd[2] = 0;
    qtd[3] = 0;
    qtd[4] = 0;
    qtd[5] = 0;
    qtd[6] = 0;

    scanf("%d", &n);
    printf("%d\n", n);

    qtd[0] = n / 100; 
    n = n % 100;
    qtd[1] = n / 50; 
    n = n % 50;
    qtd[2] = n / 20; 
    n = n % 20;
    qtd[3] = n / 10; 
    n = n % 10;
    qtd[4] = n / 5; 
    n = n % 5;
    qtd[5] = n / 2; 
    n = n % 2;
    qtd[6] = n; 

    printf("%d nota(s) de R$ 100,00\n", qtd[0]);
    printf("%d nota(s) de R$ 50,00\n", qtd[1]);
    printf("%d nota(s) de R$ 20,00\n", qtd[2]);
    printf("%d nota(s) de R$ 10,00\n", qtd[3]);
    printf("%d nota(s) de R$ 5,00\n", qtd[4]);
    printf("%d nota(s) de R$ 2,00\n", qtd[5]);
    printf("%d nota(s) de R$ 1,00\n", qtd[6]);

    return 0;
}