#include<stdio.h>     /*bit vise operation on two values*/
int main()
{
unsigned int x=5,y=9;
int z=0;

z=x&y; //and operation of x and y and it will be the bit wise


printf("\nbit wise AND operation :%d",z);

z=x|y; // bit wise OR operation 

printf("\n bit wise OR opereation : %d",z);

z=x^y; //bit wise  XOR operation
 printf("\n bit wise XOR operation : %d",z);
 
 z=~y; //one's compliment
 printf("\n bit wise one's compliment of y :%d",z);

z=y<<1;// shift left 
printf("\n bit wise shift left of y : %d",z);

z=y>>1;// sift right
printf("\n bit wise shift right of y : %d",z);
 
    return 0;
}