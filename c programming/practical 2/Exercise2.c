#include<stdio.h>
int main()
{
float i,j,km,inch,feet,m;

printf("Enter the distance between two cities in km:\n");
scanf("%f",&km);

m=km*1000;
inch=km*39370.1;
feet=km*3280.84;

printf("Distance between two cities in meter:%f \n",m);
printf("Distance between two cities in inch:%f \n",inch);
printf("Distance between two cities in feet:%f ",feet);


    return 0;
}