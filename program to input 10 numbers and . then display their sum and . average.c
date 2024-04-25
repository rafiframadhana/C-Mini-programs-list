#include <stdio.h>
#include<math.h>
  
int main()
{
    int largest, smallest, num, sum = 0;
    float avg;
    printf("Enter the 10 numbers: \n");
     
    for (int i = 1; i <= 10; i++)   
	{
        printf("Number %d = ", i);
        scanf("%d", &num);
        sum = sum + num;
   
        avg = sum / 10;
      
	if (num>largest)
        largest=num;
		    
    if (num<smallest)
        smallest=num;   
    }
    
    printf("Sum of 10 numbers: %d\n", sum);
    printf("Average of 10 numbers: %.2f\n", avg);
    printf ("The largest number is : %d\n", largest);
    printf ("The smallest number is : %d", smallest);

	return 0;
}