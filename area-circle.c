#include <stdio.h>
 
int main() {
 
    const double n = 3.14159;
    double A, R;

    scanf("%lf", &R);
    A = n * (R * R);
    printf("A=%.4f\n", A);
    return 0;
}