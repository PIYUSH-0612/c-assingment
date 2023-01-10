#include<stdio.h>
void main(){
	int n,m,i,j;
	printf("enter the rows\n");
 	scanf("%d",&n);
 	printf("enter the columns\n");
 	scanf("%d",&m);
 	int a[n][m];
 	printf("enter the elements\n");
 		for(i=0;i<n;i++){
 			for(j=0;j<m;j++){
 				scanf("%d",&a[i][j]);
			 }
		 }
		 printf("the matrix is\n");
		  for(i=0;i<n;i++){
	 	for(j=0;j<m;j++){
	 		printf("%d",a[i][j]);
		 }
		 printf("\n");
	 }
	 printf("transpose matrix is\n");
	 
	   for(i=0;i<n;i++){
	 	for(j=0;j<m;j++){
	 		printf("%d",a[j][i]);
		 }
		 printf("\n");
	 }
}
