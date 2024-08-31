#include <stdio.h>

int main()
{
    int duration, seconds, minutes, hours, remainder;

    scanf("%d", &duration);

    hours = duration / 3600;
    remainder = duration % 3600;
    minutes = remainder / 60;
    seconds = remainder % 60;    

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}