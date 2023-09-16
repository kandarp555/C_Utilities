#include <stdio.h>
int main() //write a program to find simple  interest

{
    float amount, inrate, value;
    int year,i;

    printf("enter the principle amount: \n");
    scanf("%f", &amount);

    printf("enter the interest rate: \n");
    scanf("%f", &inrate);

    printf("enter time duration in years:\n");
    scanf("%d", &year);
    i=1;

   while(i<=year)
   {printf("amount of %d year is %f\n",i,amount);
   value=amount+inrate*amount;i++;


amount=value;

}
    return 0;
}