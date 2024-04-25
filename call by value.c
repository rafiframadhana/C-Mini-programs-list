#include<stdio.h>

void print(int a)
{
   printf("From print function\n");
   printf("Address of a = %p\n",&a);
}

int main()
{
   int a = 10;

   printf("From Main Function\n");
   printf("Address of a = %p\n",&a);

   print(a);

   return 0;
}