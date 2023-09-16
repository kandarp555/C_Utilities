#include<stdio.h>
int main()
{
int i=1,n,sum=0;
printf("Enter the value of n:\n");
scanf("%d",&n);
while(i<=n)
{
   if (i%2!=0)
   {
       printf("%d\n",i);
       sum=sum+i;
   }
   
   i=i+1;
}


printf("this is the sum of all odd numbers you get:%d",sum);
    return 0;
}