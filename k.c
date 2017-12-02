#include<stdio.h>
int main()
{
int a,sum=0,remainder;
printf("Enter four digit number\t");
scanf("%d",&a);
while(a!=0)
{
remainder=a%10;
sum=sum+remainder;
a=a/10;
}
printf("%d\n",sum);
return 0;
}
