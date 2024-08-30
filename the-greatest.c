#include <stdio.h>
#include <stdlib.h> 

int main() {
    int a, b, c, maxab, maxabc;

    scanf("%d %d %d", &a, &b, &c);

    maxab = (a + b + abs(a - b)) / 2;
    maxabc = (maxab + c + abs(maxab - c)) / 2;
    printf("%d eh o maior\n", maxabc);

    return 0;
}