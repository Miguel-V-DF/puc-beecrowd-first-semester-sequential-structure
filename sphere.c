#include <stdio.h>

int main () {

    const double PI = 3.14159;
    double radius, volume;

    scanf("%lf", &radius);

    volume = (4.0 / 3) * PI * (radius * radius * radius);


    printf("VOLUME = %.3f\n", volume);

    return 0;
}