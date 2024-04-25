#include <stdio.h>
#include <limits.h>
 
int main()
{
	int arr[50], i, Size;
	int first, second;
	
	printf("Please Enter the Number of elements in an array : ");
	scanf("%d", &Size);
	
	printf("\nPlease Enter %d elements of an Array: \n", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
    }
	 
	first = second;  
	   
	for (i = 0; i < Size; i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && arr[i] < first)
		{
			second = arr[i];
		}	
	}

	printf("\nThe Second Largest Number in this Array : %d", second);
	
	return 0;
}