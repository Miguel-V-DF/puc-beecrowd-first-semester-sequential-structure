#include <stdio.h>
 
int main() {
 
    int number, hours;
    float amount, salary;

    scanf("%d %d %f", &number, &hours, &amount);
    salary = hours * amount;


    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);

    
    return 0;
}