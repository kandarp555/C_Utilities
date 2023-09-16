#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,root1,root2;

    printf("enter value of a:\n ");
    scanf("%lf",&a);

    printf("enter value of b:\n");
    scanf("%lf",&b);

    printf("enter value of c:\n");
    scanf("%lf",&c);

    if (b*b-4*a*c>0)

    {
    root1=(-b+sqrt(b*b-4*a*c))/2*a;

    root2=(-b-sqrt(b*b-4*a*c))/2*a;

    printf("the root1:%lf\n",root1);
    printf("the root2: %lf",root2);
    }
    else{printf("the value is in the index ");}


    return 0;
}