
#include<stdio.h> 
void main() 
{ 
int number,rem, sum=0,i; 
printf("enter a number\n"); 
scanf("%d",&number); 
for(i=1;i<=(number-1);i++) 
{rem=number%i; 
if(rem==0) 
{sum=sum+i; 
} 
} 
if(sum==number) 
printf("entered number is perfect number"); 
else 
printf("not a perfect number"); 
}
