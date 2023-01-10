#include<stdio.h>
void main(){
	int a[100],i,n,pos;
	
	printf("enter the size\n");
	scanf("%d",&n);
	
	printf("enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	printf("enter the position\n");
	scanf("%d",&pos);
	printf("the  element  deleted is %d\n",a[pos]);
	for(i=pos;i<n-1;i++){
		a[i]=a[i+1];
	}
	a[n-1]=0;
	printf("new array\n");
	for(i=0;i<n-1;i++){
	
	printf("%d\n",a[i]);
	}
}
