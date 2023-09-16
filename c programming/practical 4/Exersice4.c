#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, total;

    printf("Enter the rollnumber of the student:\n");
    scanf("%d", &a);

    printf("Enter the marks of physics out of 100 :\n");
    scanf("%d", &b);

    printf("Enter the marks of maths out of 100 :\n");
    scanf("%d", &c);

    printf("Enter the makrs of chemistry out of 100 :\n");
    scanf("%d", &d);

    printf("Enter the marks of biology out of 100 :\n ");
    scanf("%d", &e);

    printf("Enter the makrs of pps out of 100 :\n");
    scanf("%d", &f);

    total = b + c + d + f + e + f;

    printf("Total marks = %d\n", total);

    printf(" percentage = %d\n", (total * 100) / 500);

    if (total > 175)
    {
        printf("Student passed in the exam");
    }
    else
    {
        printf("Student failed in the exam");
    }
    return 0;
}