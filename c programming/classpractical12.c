#include <stdio.h>
int main()
{ // fibonaci series
int n1=0,n2=1,n3,i,num;

printf("Enter the number of elements:\n");
scanf("%d",&num);

printf("\n%d",n2);

for ( i = 2; i < num; i++)
{
    n3=n1+n2;
    printf("\t%d",n3);
    n1=n2;
    n2=n3;
}
    return 0;
}