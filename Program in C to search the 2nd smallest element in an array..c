#include <stdio.h>
#include <limits.h>
 
int main()
{
	int arr[50], i, size;
	int smallest, secondsmallest;
	
	printf("Please Enter the Number of elements in an array : ");
	scanf("%d", &size);
	
	printf("\nPlease Enter %d elements of an Array: \n", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
    }
	 
	if (arr[0] < arr[1]) {
        smallest = arr[0];
        secondsmallest = arr[1];
    }
    else{
        smallest = arr[1];
        secondsmallest = arr[0];
        }
    for (i = 2; i < size; i++) {
        if (arr[i] < smallest) {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondsmallest) {
        	secondsmallest = arr[i];
        }
    }

    printf("\nThe Second smallest Number in this Array : %d", secondsmallest);
	    
}