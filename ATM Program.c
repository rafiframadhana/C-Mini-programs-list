#include <stdio.h>
#include<stdlib.h>

int main ()
{
	long int choice, withdraw, pin, amount = 5000, new_amount = 0;
    int attempt = 0, limit = 3, outoflimit= 0;
    int k=0;
    char transaction = 'y';
    
    printf("Welcome To My Bank\n\n");
    
    while(pin != 6789 && outoflimit==0)
	{
    	if(attempt<limit){
        printf("Please Enter Your Pin : ");
    	scanf("%d", &pin);
    	attempt++;
		}
		else{
			outoflimit=1;
		}	
	}		
	if(outoflimit==1){
		printf("\n\nYour Card Blocked for next 24 Hours\n\n");
		exit(0);
	}
	else{
		printf("\n\n");
	}
		
	do
	
	{
	
     
    	printf("------------Welcome to ATM Service-------------\n");

		printf("1. Check Balance\n");

		printf("2. Withdraw Cash\n");

		printf("3. Quit\n");

		printf("-----------------------------------------------\n\n");
	
	
		printf("Enter your choice: ");	
    	scanf("%d", &choice);
    
    	if (choice == 1)
    	{
    		printf("\nCurrent balance on your account: %d\n", amount);
    	}
    	else if (choice == 2)
    	{
    		printf("\nEnter the amount you want to withdraw: ");
    		scanf("%d", &withdraw);

    		if (withdraw > amount)
      		{
       	 	printf("\nYou don't have sufficient balance");
     	 	}
    		else
      		{
        		new_amount = amount - withdraw;
        		printf("\nCurrent balance on your account: %d\n", new_amount);
      		}
   	 	}

		else if (choice == 3)
		{
    		printf("\nThank you for using our service\n\n");
    		exit(0);
		}

		printf("\n\n\nDo You Wish To Have Another Transaction?(y/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
	
		if (transaction == 'n'|| transaction == 'N'){
			k = 1;
    	}
		else if (transaction != 'y'){
			printf("\nInvalid Choice");
				k=1;
		}
	
	} 
	while (!k);
	printf("\n\nThank you for using our service\n\n");
                  
	return 0;
}

