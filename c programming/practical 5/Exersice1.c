5#include <stdio.h>
int main()
{
    int n, j;
    printf("Enter the number you want multiplication table:\n");
    scanf("%d", &n);
    printf("The multiplication table of %d :\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}