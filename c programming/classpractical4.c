#include <stdio.h>
int main()
{
    int n, sum, r;
    printf("enter any number n:\n");
    scanf("%d", &n);

    sum = 0;
    while (n>0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    printf("number of reverse number is %d\n", sum);

    return 0;
}