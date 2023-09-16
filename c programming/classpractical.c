#include <stdio.h>
#include<conio.h>
int main()               //Adani institute infrastructure and engineering 
                        /*pps practical set 1
                        write a program to basic operation of given two numbers  */

{
    int a,b,p;
    printf("Enter the first number\n");
    scanf("%d",&a);

    printf("Enter the second number\n");
    scanf("%d",&b);
    
    p=a;
    a=b;
    b=p;
printf("after swaping first number %d\n",a);
printf("after swaping second number %d\n",b);
printf("the sumation of two numbers is %d\n",a+b);
printf("the substraction of this two number is %d\n",a-b);
printf("the multiplicatoin of this two number is %d\n",a*b);
printf("the dividation of this two number is %d",a/b);

return 0;
}