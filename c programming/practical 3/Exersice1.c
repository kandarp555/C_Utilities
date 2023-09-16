#include <stdio.h>
int main()
{

    int x, y;
    float z;
    double a, b;
    char c;
    printf("The size of int x,y is : %lu\n", sizeof(x,y));
    printf("The size of float z is : %lu\n", sizeof(z));
    printf("The size of double a,b is : %lu\n", sizeof(a, b));
    printf("The size of char c is : %lu\n", sizeof(c));

    return 0;
}