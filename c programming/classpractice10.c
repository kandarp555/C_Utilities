#include <stdio.h>
int main()
{
    int row,z;
    printf("Enter the number of row:\n");
    scanf("%d", &row);
    int i, j;
    printf("printing the pettern:\n");
    for (i = 0; i <= row; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}