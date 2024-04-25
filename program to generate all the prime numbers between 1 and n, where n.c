#include<stdio.h>
 
void main()
{
    int i,j,n;
    
    printf("This is Program to generate all the prime numbers between 1 and n, where n is a value supplied by the user\n\n\n");
 

    printf("Put n Value: ");
    scanf("%d",&n);
    
    printf("Prime numbers are: \n");    
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
         
       if(c==2)
        {
            printf("%d ",i);
        }
    }
}