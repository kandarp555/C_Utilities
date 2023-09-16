#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number : \n");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("Entered number is positive");
    }

    else if (a < 0)
    {
        printf("Entered number is negative");
    }
    else
    {
        printf("Entered number is zero");
    }

    return 0;
}