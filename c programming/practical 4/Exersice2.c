#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number :\n");
    scanf("%d", &a);

    if (a % 5 == 0)
    {
        printf(" Entered number is divisible by 5");
    }
    else
    {
        printf(" Entered number is not divisible by 5");
    }

    return 0;
}