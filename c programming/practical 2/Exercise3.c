#include <stdio.h>
int main()
{
    float C, F;

    printf("Enter the Temperature in Fahrenheit:\n ");
    scanf("%f", &F);

    C = (F - 32) / 1.8;

    printf("Given Temperature in Celsius:%f\n", C);

    printf("Enter the Temperature in Celsius:\n");
    scanf("%f", &C);

    F = (C * 1.8) + 32;

    printf("Given Temperrature in Fahrenheit:%f", F);
    return 0;
}