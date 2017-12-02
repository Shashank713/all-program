#include<stdio.h>
int gcd(int a,int b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}           
void main(){
int a,b,c;
scanf("%d%d",&a,&b);
gcd( a, b);
c=gcd( a, b);
printf("%d\n",c);
}







