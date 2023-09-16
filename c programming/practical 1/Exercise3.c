#include <stdio.h>
int main()
{
    int a, b, c, d, e,sum,avrg;

    printf("Enter the first number:\n");
    scanf("%d", &a);

    printf("Enter the second number:\n");
    scanf("%d", &b);

    printf("Enter the third number:\n");
    scanf("%d", &c);

    printf("Enter the fourth number:\n");
    scanf("%d", &d);

    printf("Enter the fifth number:\n");
    scanf("%d", &e);

    printf("Five eneterd numbers are\n %d,%d,%d,%d,%d\n", a, b, c, d, e);

    sum=a+b+c+d+e;
    avrg=sum/5;

    printf("The sum of eneterd five numbers:%d\n",sum);
    
    printf("The average of Entered five numbers:%d",avrg);

    return 0;
}