#include <stdio.h>
int main()
{ //find the prime number
    int min, max, i, j, count;

    printf("Enter the minimun and maximum values to find prime value between it :\n");
    scanf("%d\n%d", &min, &max);

    for (i = min; i <= max; i++)
    {
        count = 0;

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
               { count++;}
        }
        if (count == 2)
        {
            printf("\t%d", i);
        }
    }

    return 0;
}