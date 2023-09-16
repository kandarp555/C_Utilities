#include<stdio.h>    /*write a program to find maximum from given two numbers using conditional operator*/
int main()
{
int a,b,max;

printf("enter the value of a :\n");
scanf("%d",&a);

printf("enter the value of b:\n");
scanf("%d",&b);

max=(a>b)?a:b;

if (a==b)
{
    printf("entered two values are same\n");
}

else{
printf("The maximum number is : %d",max);
}


    return 0;
}