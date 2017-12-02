#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    char *x;
    gets(s1);
    gets(s2);
    x=strstr(s1,s2);
printf("%c\t%c",x,x-s1);
    if(strstr(s1,s2)==NULL)
    	printf("-1");
    else
    	printf("%d",x-s1);
    return 0;
}
