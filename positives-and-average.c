#include <stdio.h>

int main() {
    float number = 0, sum = 0, average = 0;
    int i, positive = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%f", &number);
        if(number > 0)
        {
            sum = sum + number;
            positive++;
        }
    }
    average = sum / positive;  
    printf("%d valores positivos\n", positive);
    printf("%.1f\n", average);
    return 0;
}