#include<stdio.h>
void main(){
int b,i,sum;
printf("num\n");
scanf("%d",&b);

for(i=1;i<=b;i++)
sum=sum*i;
printf("%d is the factorial ",sum);
}
