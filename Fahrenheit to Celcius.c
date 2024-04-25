#include<stdio.h>
#include<conio.h>

int main()
{
 float celsius, fahrenheit;

 printf("Enter Temp in Fahrenheit : ");
 scanf("%f", &fahrenheit);

 celsius = (fahrenheit-32) / 1.8;
 printf("\nTemperature in Celsius : %.2f ", celsius);

 return 0;
}