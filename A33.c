#include<stdio.h>
void main(){
	int a[100],n,i,val,pos;
	printf("enter the no. of elemts\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("enter the elemnts\n");
		scanf("%d",&a[i]);
		
	}
	n++;
	printf("enter the position\n");
	scanf("%d",&pos);
printf("enter the value\n");
scanf("%d",&val);

for(i=n;i>pos;i--){
	a[i]=a[i-1];

}

a[pos]=val;
for(i=0;i<n;i++){
	printf("%d\n",a[i]);
}}

