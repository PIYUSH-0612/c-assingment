#include<stdio.h>

void main()
{
int exponential=1,power,base,i;
    printf("enter the base\n");
    scanf("%d",&base);
    printf("enter the power\n");
    scanf("%d",&power);
    
    for(i=1;i<=power;i++)
    exponential=exponential*base;
    
    printf("%d",exponential);
}
