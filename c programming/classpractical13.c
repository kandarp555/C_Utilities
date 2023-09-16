#include <stdio.h>
int main()
{//second largest number
    float a, b, c;

    printf("Enter the value of a,b,c:\n");
    scanf("%f\n %f\n %f", &a, &b, &c);

    if (a >= b && a <= c)
    {
        printf("the second largest number is %0.2f\n", a);
    }
    if (a >= c && a <= b)
    {
        printf("the second largest number is %0.2f\n", a);
    }
    if (b >= a && b <= c)
    {
        printf("the second largest number is %0.2f\n", b);
    }
    if (b >= c && b <= a)
    {
        printf("the second largest number is %0.2f\n", b);
    }
    if (c >= a && c <= b)
    {
        printf("the second largest number is %0.2f\n", c);
    }
    if (c >= b && c <= a)
    {
        printf("the second largest number is %0.2f\n", c);
    }

    return 0;
}