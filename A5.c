#include<stdio.h>
#include<math.h>
void main(){
float x,y,a;
printf("enter the base \n");
scanf("%f",&x);
printf("enter the exp \n");
scanf("%f",&y);
a=pow(x,y);

if(y==0.5){
	printf("the square root is %f",a);
}
else
printf("the answer is %f",a);
}

