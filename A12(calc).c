#include<stdio.h >
void main(){
int a,b,x,cal;
printf("ENTER THE FIRST NUMBER\n");
 scanf("%d",&a);
printf("ENTER THE SECOND NUMBER\n");
scanf("%d",&b);
printf("FOR ADDITION PRESS 1\nFOR SUBSTRACTION PRESS 2\nFOR MULTIPLICATION PRESS 3\nFOR DIVISION PRESS 4\n");
printf("ENTER THE CHOICE\n");
scanf("%d",&x);
switch(x)
{
case 1: cal=a+b;
        printf("THE SUM IS=%d",cal);
        break;
case 2: cal=a-b;
        printf("THE DIFFERENCE IS=%d",cal);
        break;
case 3: cal=a*b;
        printf("THE PRODUCT IS=%d",cal);
        break; 
case 4: cal=a/b;
        printf("THE DIVISION IS =%d",cal);
        break;
default: printf("WRONG CHOICE");
        
}

}

