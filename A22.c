#include<stdio.h>
void main(){
	int a,b,i,gcd,lcm,small;
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n ");
	scanf("%d",&b);
if(a>b)
small=a;
else
small=b;
	for(i=1;i<=small;i++){
	
	if(a%i==0&&b%i==0)
		gcd=i;
	}
		printf("the gcd is %d\n",gcd);
	lcm=(a*b)/gcd;
	printf("the lcm is%d",lcm);
}
