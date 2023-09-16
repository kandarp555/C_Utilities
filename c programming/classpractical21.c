#include<stdio.h>
int main()
{int p,r,t;
float si;

printf("principle amount:");
scanf("%d",&p);

printf("\n interest rate:");
scanf("%d",&r);

printf("\n time duration:");
scanf("%d",&t);

si=(float)(p*r*t)/100;

printf("\n The siple interest : %f",si);


    return 0;
}