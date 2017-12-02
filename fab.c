#include<stdio.h>
void main(){
int i,a=0,b=1,d,n;
scanf("%d",&n);
for(i=0;i<n;i++){
if(i<=1)
d=i;
else
{
d=a+b;
a=b;
b=d;
}
printf("%d\n",d);
}}



