#include <stdio.h>

int main()
{
    int age, years, months, days, remainder;

    scanf("%d", &age);
    
    years = age / 365;
    remainder = age % 365;
    months = remainder / 30;
    days = remainder % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}