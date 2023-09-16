#include <stdio.h>
int main()
{
    int X, Y = 6, Z, T;

    X = Y--;
    X = X++;
    X = ++Y;
    T = Z++ + ++Y;
    T = T + 8;
    T = Z++ + ++Z;

    printf(" X=%d\n Y=%d\n Z=%d\n T=%d ", X, Y, Z, T);

    return 0;
}