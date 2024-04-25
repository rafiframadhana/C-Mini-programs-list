#include<math.h>
#include<stdio.h>

int main()
{
	double r,a,p;
	int num;
	
	printf("Enter the Radius of a Circle: ");
	scanf("%lf", &r);
	printf("Press 1 for area of a circle or 2 for perimeter of circle: ");
	scanf("%d", &num);
	
	a=3.14*r*r;
	p=2*3.14*r;
	
	if (num==1)
	{
		printf("Area of a circle is : %lf \n",a);
	}
	
	else
	{
		printf("Perimeter of a circle is : %lf \n", p);
	}
}
