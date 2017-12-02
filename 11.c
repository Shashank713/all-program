#include<stdio.h>
int main()
{
int a,r,x,y;
int sum=0;
printf("Enter the number to be checked\n");
scanf("%d",&a);
y=a;
while(a!=0)
{
r=a%10;
a=a/10;
x=r*r*r;
sum=sum+x;
}
if(sum==y)
{
printf("Entered number is an armstrong number\n");
}
else
{
printf("Entered number is not an armstrong number\n");
}
}
