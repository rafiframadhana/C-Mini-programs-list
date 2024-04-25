#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int main(){
	
	long int choice,withdraw,amount=5000,new_amount=0;
	int pin, attempt=1, limit=2, outoflimit=0, k=0;
	char moretransaction;
	
	printf("Welcome to My Bank\n\n");
	
	printf("Please Enter your pin: \n");
	scanf("%d", &pin);
	
	if(pin==6789)
		outoflimit=0;
	
		
	while(pin!=6789 && outoflimit==0)
	{
		if(attempt<=limit){
			printf("\nYour pin is incorrect, please enter it again: \n");
			scanf("%d", &pin);
			attempt++;
			
		}
		else{
			outoflimit=1;
		}
	}
	
	if(outoflimit==1){
		printf("\n\nYour card is Blocked for next 24 hours for too many wrong attempt\n\n");
		exit(0);
	}else{
		printf("\n\n");
	}
	
	do
	{
		
		printf("          **Welcome to the Atm Service**\n\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw cash\n");
		printf("3. Quit\n");
		printf("\n--------------------------------------------\n");
		
		printf("\nPlease Enter your Choice: ");
		scanf("%d", &choice);
		
		if(choice==1){
			printf("\nYour available balance is: %d\n",amount);
		}
		else if(choice==2){
			printf("Enter amount of money to withdraw: ");
			scanf("%d", &withdraw);
			
			if(withdraw>amount){
				printf("\nYour balance is not sufficient");
			}else{
				printf("\nPlease collect the money\n");
				new_amount=amount-withdraw;
				
				printf("\nAvailable balance: %d\n", new_amount);
			}
		}
		else if(choice==3){
			printf("\n\nThank you for using our service");
			exit(0);
		}else if(choice!=1 || choice!=2 || choice!=3){
			printf("\nIncorrect choice");
		}
		
		
		printf("\n\n\nDo You wish to have another transaction? (y/n): \n");	
		fflush(stdin);
		scanf("%c",&moretransaction);
		
		if(moretransaction=='y' || moretransaction=='Y'){
			k=0;
		}else{
			k=1;
		}
		printf("\n\n");	
	}
			
	while (!k);
	printf("\n\nThank you for using our service\n\n");
	
	getch();
	
}
	
