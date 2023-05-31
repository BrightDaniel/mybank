#include <stdio.h>
#include "bwave.h"

int main()
{
	char option;
	double balance = 50000.00;
	double lastTransferAmount = 0.0;

	/* Greeting message */
	printf("\nHello, Welcome to Mybank. With us, Banking has been  made easy. \n");
	
	/* Create account */
	createAccount();

	char password[20];
	int passwordCorrect = 0;

	printf("Enter your password: ");
	scanf("%s", password);

	passwordCorrect = validatePassword(password);
	

	if (passwordCorrect)
	{
		printf("Welcome to instant banking with my bank. \nYou have a fixed amount of 50,000 \n \n");

		while(1)
		{
			printf("Menu: \n");
			printf("a) Transfer funds \n");
			printf("b) Deposit funds \n");
			printf("c) Check balance \n");
			printf("d) Quit the program \n");

			printf("Select an option: ");
			scanf(" %c", &option);

			switch (option)
			{
				case 'a':
					printf("Option a: Transfer Money\n");
					transferMoney(&balance, &lastTransferAmount);
					break;

				case 'b':
					printf("Option b: Deposit Money\n");
					/* Add code to deposit money */
					depositMoney(&balance);
					break;

				case 'c':
					printf("Option c: Check balance\n");
					/* Add code to check balance */
					checkBalance(balance);
					break;

				case 'd':
					printf("Option d: Quit the program\n");
					return 0;

				default:
					printf("Invalid option, try again. \n");

			}	


		}

	}

	return 0;
}
