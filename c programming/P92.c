#include <stdio.h>/*swap by functoin calling*/

int swap(int, int);

int main()
{
    int a, b;

    printf("Enter the value of a and b:\n");
    scanf("%d\n%d", &a, &b);

    printf("Before swapping : a=%d and b=%d\n", a, b);

    swap(a, b);

    return 0;
}

int swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("After swaping : a=%d and b=%d", x, y);
}