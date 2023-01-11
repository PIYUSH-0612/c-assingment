#include<stdio.h>
void main()
{
	int i,n,j,t;
	
	printf("enter the size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf(" second largest element is\n");
	printf("%d\n",a[n-2]);
	
}
