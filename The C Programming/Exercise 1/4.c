#include <stdio.h>
int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -20;
    upper = 150;
    step = 10; 

    printf("  C      F\n");

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}