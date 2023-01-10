#include<stdio.h>
void main(){
int a,b,c;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number \n");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("the value of a is %d \n",a);
printf("the value of b is %d \n",b);
}

