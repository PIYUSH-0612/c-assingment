#include<stdio.h>
void main()
{
     int size,i;
     float avg,sum=0;
     printf("enter the size\n");
     scanf("%d",&size);
     int a[size];
     printf("enter the elements\n");
     for(i=0;i<size;i++){
     	scanf("%d",&a[i]);
     	
     	sum=sum+a[i];
     	
}
	 printf("the sum is %f\n",sum);

     avg=sum/size;
     printf("the average is %f",avg);
     
     
     	
	 }
