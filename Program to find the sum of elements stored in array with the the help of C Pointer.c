#include <stdio.h>
void main() 
{
   int arr1[10];
   int i,n, sum = 0;
   int *pt;
	
   printf("Enter number of elements in the array : ");
   scanf("%d",&n);
   
   printf("Enter %d numbers : \n",n);
   for(i=0;i<n;i++)
      {
	  printf("Number - %d : ",i+1);
	  scanf("%d",&arr1[i]);
	  } 	

   pt = arr1; // pt store the base address of array arr1
 
   for (i = 0; i < n; i++) {
      sum = sum + *pt;
      pt++;
   }
 
   printf(" The sum of array is : %d\n\n", sum);
}
