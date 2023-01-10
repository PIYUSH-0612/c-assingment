#include<stdio.h>
void main(){
float maths,eng,science,hindi,sst;
float T,A,P;
printf("enter the marks of math\n");
scanf("%f",&maths);
printf("enter the marks of english \n");
scanf("%f",&eng);
printf("enter the marks of science \n");
scanf("%f",&science);
printf("enter the marks of hindi \n");
scanf("%f",&hindi);
printf("enter the marks of social \n");
scanf("%f",&sst);

T=maths+eng+science+hindi+sst;
A=T/5;
P=(T/500)*100;
printf("the total is %f \n",T);
printf("the average is %f\n",A);
printf("the percentage is %f%\n",P);
}

