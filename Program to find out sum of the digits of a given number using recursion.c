#include <stdio.h>
 
int DigitSum(int num);
 
int main()
{
    int n1, sum;  
    printf("Enter any number: ");
    scanf("%d", &n1);
     
    sum = DigitSum(n1);//call the function for calculation
     
    printf("The Sum of digits of %d = %d\n", n1, sum);
     
    return 0;
}

int DigitSum(int n1)
{
    if(n1 == 0)
        return 0;
    else    
    	return ((n1 % 10) + DigitSum(n1 / 10));//calling the function DigitSum itself
}
