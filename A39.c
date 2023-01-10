#include<stdio.h>
 void main(){
 	int n,m,i,j,sum=0;
 	printf("enter the rows\n");
 	scanf("%d",&n);
 	printf("enter the columns\n");
 	scanf("%d",&m);
 	int a[n][m];
 	if(m!=n)
 	printf("enter a square matrix\n");
 	else{
 		printf("enter the elements\n");
 		for(i=0;i<n;i++){
 			for(j=0;j<m;j++){
 				scanf("%d",&a[i][j]);
			 }
		 }
	 
	 for(i=0;i<n;i++){
	 	for(j=0;j<m;j++){
	 		printf("%d",a[i][j]);
		 }
		 printf("\n");
	 }
	 printf("digonal elements are \n");
	 for(i=0;i<n;i++){
	 	for(j=0;j<m;j++){
	 		if(i==j)
	 		printf(" %d\n",a[i][j]);
	 
		 }
	 }
	  for(i=0;i<n;i++){
	 	for(j=0;j<m;j++){
	 		if(i==j)
	 		sum=sum+a[i][j];}
	 	}
printf("the sum of diagonal elements are %d\n",sum);	 
 }
}
