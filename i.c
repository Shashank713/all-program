/* ******** program ********* */






#include<stdio.h>
void main()
{
 int s1,s2,s3,s4,s5,sum,total=500;
 float per;
 printf("\nenter marks of 5 subjects:");
 scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
 sum=s1+s2+s3+s4+s5;
 printf("\nsum:%d",sum);
per=(sum*100)/500;
printf("\npercentage:%f",per);
}



/* *********** output ********** /*
dell@dell-OptiPlex-7040:~$ gcc patil.c
dell@dell-OptiPlex-7040:~$ ./a.out

enter marks of 5 subjects: 67 65 89 65 67

sum:353
percentage:70.000000dell@dell-OptiPlex-7040:~$ 


