#include <stdio.h>
int main()
{ //factorial
    int i = 1, n;
    long factorial = 1;

    printf("Enter any number to find factorial :\n");
    scanf("%d", &n);

    while (i <= n)
    {
        factorial = factorial * i;
        i++;
    }
    printf("factorial of %d  = %d", n, factorial);

    return 0;
}