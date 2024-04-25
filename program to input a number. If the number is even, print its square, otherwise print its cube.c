#include<stdio.h>

int main()

{
    int n;

    printf("Please enter a number: ");
    scanf("%d", &n);

    if(n%2==0)
    {
        printf("%d", n*n);
    }
    else
    {
        printf("%d", n*n*n);
    }

    return 0;

}
