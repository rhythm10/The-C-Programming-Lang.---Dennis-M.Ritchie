#include<stdio.h>
int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; 
    upper = 300; 
    step = 20; 

    printf("  F      C\n");

    fahr = upper;
    while (fahr >= lower) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
 
}