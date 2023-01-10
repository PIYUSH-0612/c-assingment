#include<stdio.h>
void main()
{
int day,years,weeks,days;
printf("enter the number of day \n");
scanf("%d",&day);
years=day/365;
weeks=(day%365)/7;
days=(day%365)%7;
printf("entered days are %d year,%d weeks,%d days\n",years,weeks,days);
}

