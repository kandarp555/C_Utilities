#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,D;

printf("Enter the value of a :\n");
scanf("%f",&a);

printf("Enter the value of b :\n");
scanf("%f",&b);

printf("Enter the value of c :\n");
scanf("%f",&c);

D= b * b - 4 * a * c;
float alpha = ((-b + sqrt(D))/2*a), beta = ((-b - sqrt(D))/2*a);

if (D>0 || D==0)
{
    printf("root altha = %f and root beta = %f",alpha,beta);
}
else{
    printf("The value of D is not real");
}






    return 0;
}