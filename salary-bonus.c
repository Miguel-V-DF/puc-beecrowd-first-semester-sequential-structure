#include <stdio.h>

int main () {

    char name[24];
    double salary, sold, total;

    scanf("%s %lf %lf", name, &salary, &sold);
    total = (sold * 0.15) + salary;

    printf("TOTAL = R$ %.2f\n", total);

    return 0;
}
