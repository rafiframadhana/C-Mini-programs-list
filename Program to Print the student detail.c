 #include<stdio.h>
#include<stdlib.h>

int main(){
	char name[50], city[50];
	int rollnum,zipcode;
	
	printf("Enter Name of Student: ");
	fgets(name, 50, stdin);
	printf("Enter City of Student: ");
	fgets(city, 50, stdin);
	printf("Enter Roll No. of Student: ");
	scanf("%d", &rollnum);
	printf("Enter Zipcode of Student: ");
	scanf("%d", &zipcode);
	
	printf("\n\nDetails of Student\n\n");
	printf("Name : %s", name);
	printf("City : %s", city);
	printf("Roll No. : %d\n", rollnum);
	printf("Zipcode : %d\n", zipcode);
	
	return 0;
	
	
	
}