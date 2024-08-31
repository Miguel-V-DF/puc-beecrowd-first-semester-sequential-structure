#include <stdio.h>

int main()
{
    int time, avgSpeed;
    float distance, liters;

    scanf("%d%d", &time, &avgSpeed);

    distance = time *avgSpeed;

    liters = distance / 12.0;

    printf("%.3f\n", liters);

    return 0;
}