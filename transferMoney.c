#include "bwave.h"
/**
 * transferMoney - Transfers money function.
 * @balance: the balance
 * @lastTransferAmount: last Transfer Amount.
 * Return: void
 */
void transferMoney(double* balance, double* lastTransferAmount)
{
	char accountName[MAX_LENGTH], accountNumber[MIN_LENGTH], bank[MAX_LENGTH];
	double amount;

	printf("\nEnter recipient's account name: ");
	getchar();
	fgets(accountName, sizeof(accountName), stdin);
	accountName[strcspn(accountName, "\n")] = '\0'; //This removes the newline character from fgets 

	printf("Enter recipient's account number: ");
	scanf("%s", accountNumber);

	getchar();
	printf("Enter recipient's bank name: ");
	fgets(bank, sizeof(bank), stdin);
	bank[strcspn(bank, "\n")] = '\0'; //This removes the newline character from fgets 
	
	printf("Enter transfer amount: ");
	scanf("%lf", &amount);

	if (amount > *balance) {
		printf("Insufficient balance for the transfer.\n");
		return;
	}
	
	//Perform transfer operation.
	*balance -= amount;
	*lastTransferAmount = amount;

	//print reciept with transaction details
	printReceipt("Debit Alert", accountName, accountNumber, bank, amount, *balance +  amount, *balance);

}

