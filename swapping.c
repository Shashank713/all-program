#include <stdio.h>
void main()
{
int x,y,temp;
printf("enter the value of x & y");
scanf("%d%d",&x,&y);
printf("Before swapping x=%d y=%d",x,y);
temp=x;
x=y;
y=temp;
printf("after swapping x=%d,y=%d",x,y);
}
