#include<stdio.h>
void main(){
	int n,i,val,flag=0;
	
	printf("enter the size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements\n");
	
	for(i=0;i<n;i++){
	
	scanf("%d",&a[i]);
}
printf("eneter the value to search\n");
scanf("%d",&val);

for(i=0;i<n;i++){
	
	if(a[i]==val)
	flag++;
	
}
printf("the value is %d times in array\n",flag);
for(i=0;i<n;i++){

if(a[i]==val)
printf("value found at %d",i);
}

}
