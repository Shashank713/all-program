#include<stdio.h>
in check_prime(int);
main()
{
int i, n, result;
printf("enter the number of prime numbers required\n")
scanf("%d",&n);
printf("first %d prime numbers required\n");
scanf("%d",&n);
printf("first %d prime number numbers are:\n",n);
for(i0; i<n;i++)
{
result=check_prime(i);
if(result==1)
printf("%d\n",i);
}
return 0;
}
int check_prime(int a)
{
int c;
for(c=2; c<=a-1; c++)
{
if(a%c==0)
return 0;
}
if(c==a)
return 1;
}
