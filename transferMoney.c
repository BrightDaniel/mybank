#include <stdio.h>
#include "bwave.h"

void transferMoney(double* balance, double* lastTransferAmount)
{
	char accountName[20], accountNumber[20], bank[20];
	double amount;

	printf("Enter recipient's account name: ");
	scanf("%s", accountName);
	printf("Enter recipient's account number: ");
	scanf("%s", accountNumber);
	printf("Enter recipient's bank name: ");
	scanf("%s", bank);
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

