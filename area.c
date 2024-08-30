#include <stdio.h>

int main() {

    const double PI = 3.14159;
    double A, B, C, triangle, circle, trapezium, square, rectangle;

    scanf("%lf %lf %lf", &A, &B, &C);

    triangle = 0.5 * A * C;
    circle = PI * (C * C);
    trapezium = 0.5 * (A + B) * C;
    square = B * B;
    rectangle = A * B;

    printf("TRIANGULO: %.3f\n", triangle);
    printf("CIRCULO: %.3f\n", circle);
    printf("TRAPEZIO: %.3f\n", trapezium);
    printf("QUADRADO: %.3f\n", square);
    printf("RETANGULO: %.3f\n", rectangle);

    return 0;
}