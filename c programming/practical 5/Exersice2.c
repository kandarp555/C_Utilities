#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("1/%d", i);
        if (i < n)
        {
            printf(" + ");
        }
    }

    return 0;
}