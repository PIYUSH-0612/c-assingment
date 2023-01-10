#include<stdio.h>
void main()
{
	int m,n,i,j,cou=0;
	
	printf("ENTER THE ROWS\n");
	scanf("%d",&m);
	printf("enter the columns\n");
	scanf("%d",&n);
	
int a[m][n];
printf("enter the elements\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	
	
	if(a[i][j]==0)
	cou++;
}
}
if(cou>(m*n/2)){

printf(" sparse matrix");
printf("%d\n",cou);
}
else
printf("  not sparse");
}
