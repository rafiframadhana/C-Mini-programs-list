#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float p,r,t,si,ci;
	
	printf("Enter Principle, Rate and Time: ");
	scanf("%f%f%f",&p,&r,&t);
	
	si=p*r*t/100; 
	ci=p*pow((1+r/100),t);
	
	printf("\n\n Simple Interest is : %f", si);
	printf("\n\n Compound Interest is : %f%",ci);
	
	return 0;
}