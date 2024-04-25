#include <stdio.h> 
int main() 
{
	int width, height;                 
	int area, perimeter;           

	printf("Enter height of Rectangle in inches: ");
	scanf("%d", &height);
	printf("Enter width of Rectengle in inches: ");
	scanf("%d", &width);

    perimeter = 2*(height + width);
	printf("\nPerimeter of the rectangle = %d inches\n", perimeter);
	
	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);

	return(0);
}
