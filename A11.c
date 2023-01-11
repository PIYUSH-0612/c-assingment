#include<stdio.h>
void bill(int U){
	
float b,TB;
printf("1 - 100 units @ Rs. 2.00/- (per unit)\n");
printf("101 - 200 units @ Rs. 3.50/- (per unit)\n");
printf("201 and more units @ Rs. 4.50/- (per unit)\n");

if(U<=100){
	b=U*2;
}
else if(U>100&&U<200){
	b=200+(U-100)*3.50;
}
else if(U>200){
	b=200+700+(U-300)*4.50;
}
printf("bill after 10% tax\n");
TB=b+b*0.1;
printf("the tota bill to be paid %f\n",TB);

}
void main(){
	float u;
	printf("enter the units\n");
	scanf("%f",&u);
	
	bill(u);
}
