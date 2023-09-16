#include<stdio.h>
int main()
{
char operator;

float first, second;

printf("Enter an operator :\n");
scanf("%c",&operator);

printf("Enter two numbers :\n");
scanf("%f\n%f",&first,&second);

switch (operator)
{
case '+':
    printf("%0.2f+%0.2f=%0.2f",first,second,first+second);
    break;
case '-' :
    printf("%0.2f-%0.2f=%0.2f",first,second,first-second);
    break;
case '*' :
    printf("%0.2f*%0.2f=%0.2f",first,second,first*second);
    break;
case '/' :
    printf("%0.2f/%0.2f=%0.2f",first,second,first/second);
    break;
    

default:
printf("Error ! operator is not correct");
    break;
}



    return 0;
}