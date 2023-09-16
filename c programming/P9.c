/* write a program to add first N numbers*/

#include <stdio.h>

int add(int n);

int main()
{

    int range, result;

    printf("upto which you want to find sum:\n");
    scanf("%d", &range);

    result = add(range);

    printf("This is the sum of entered range:\n%d", result);
}
int add(int n)
{

    int i;
    int add = 0;

    for (i = 0; i <= n; i++)
    {
        add = add + i;
    }
    return add;
}
