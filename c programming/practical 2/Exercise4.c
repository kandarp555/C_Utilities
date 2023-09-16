#include <stdio.h>
int main()
{
    int n, m;
    int sum[] = {0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++)
    {

        printf("Enter a number:\n");
        scanf("%d", &n);

        while (n > 0)
        {
            m = n % 10;

            sum[i] = sum[i] + m;

            n = n / 10;
        }

        printf("Sum of digits is = %d\n", sum[i]);
    }

    return 0;
}