#include <stdio.h>

int fact(int);

int main()
{
    int num;

    printf("Enter any positive number to find it's factorial number:\n");
    scanf("%d", &num);

    printf("The factorial of %d is: %d\n", num, fact(num));
}

int fact(int num)
{
    if (num)
    {
        return (num * fact(num - 1));
    }
    else
    {
        return 1;
    }
}