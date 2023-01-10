#include<stdio.h>
void main(){
int b,i,sum=0;
printf("num\n");
scanf("%d",&b);
printf("all the even nos. are\n");
for(i=2;i<=b; i+=2)
printf("%d\n",i);

for(i=2;i<=b; i+=2)
sum=sum+i;
printf("%d is the sum of all even nos. entered\n",sum);
}
