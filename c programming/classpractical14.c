#include <stdio.h>
int main()
{ // whether the number is palindrome or not
    int n, r, sum = 0, temp;

    printf("Enter any number n:\n");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {

        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("the number is palindrome\n");
    }
    else
    {
        printf("the number is not pelindrome");
    }

    return 0;
}