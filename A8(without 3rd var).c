/*(WITHOUT USING 3RD VARIABLE)*/
#include<stdio.h>
void main()
{
int a,b;
printf("enter the num\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);

a=a^b;
b=a^b;
a=a^b;
printf("value of a is %d\n",a);
printf("value of b is %d\n",b);
}

