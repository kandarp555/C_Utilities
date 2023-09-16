#include <stdio.h>
int main()
{
    float r, PI = 3.14, A;

    printf("Enter the radius of circle:\n");
    scanf("%f", &r);

    A = PI * r * r;

    printf("The area of the circle is :%f", A);

    return 0;
}