#include<stdio.h>
int main()
{
   int arr[50],i,num,largest,smallest;
   
   printf("Enter the number of elements :");
   scanf("%d",&num);
   printf("Input the array elements :\n");
   
   for(i=0;i<num;++i)
      scanf("%d",&arr[i]);
   
   largest=smallest=arr[0];
   
   for(i=1;i<num;++i){
      if(arr[i]>largest)
         largest=arr[i];
      if(arr[i]<smallest)
         smallest=arr[i];
   }
   
   printf("The largest integer is : %d\n",largest);
   printf("The smallest integer is : %d\n",smallest);
   
   return 0;
}