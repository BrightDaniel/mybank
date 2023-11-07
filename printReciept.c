#include "bwave.h"
/**
 * printReceipt - Prints receipt to receipt.txt file.
 * @transactionType: Type of Transaction
 * @accountName: Name of account
 * @accountNumber: account number of user
 * @bank: bank transferred to.
 * @amount: amount transferred.
 * @previousBalance: previous balance.
 * @currentBalance: Current balance.
 * Return: void
 */
void printReceipt(const char* transactionType, const char* accountName, const char* accountNumber, const char* bank, double amount, double previousBalance, double currentBalance)
{
	//Get current date and time
	time_t t = time(NULL);
	struct tm* current_time = localtime(&t);

	//Format the date and time as a string.
	char datetime[MAX_LENGTH];
	strftime(datetime, sizeof(datetime), "%Y-%m-%d %H:%M:%S", current_time);

	//Open the receipt file in append mode.

	FILE* file = fopen("receipt.txt", "a");

	if (file != NULL)
	{
		//Write transaction details to the reciept file
		fprintf(file, "Transaction Details:\n");
		fprintf(file, "Transaction Type: %s \n", transactionType );
		fprintf(file, "Account Name: %s \n", accountName);
		fprintf(file, "Account Number: %s \n", accountNumber);
		fprintf(file, "Bank: %s \n", bank);
		fprintf(file, "Amount: %.2lf \n", amount);
		fprintf(file, "Previous Balance: %.2lf\n", previousBalance);
		fprintf(file, "Current Balance: %.2lf \n", currentBalance);
		fprintf(file, "Date: %s \n", datetime);
		fprintf(file, "-------------------\n");


		//close the receipt file
		fclose(file);

		printf("Transaction successful! Check the recipet.txt file for details. \n");
	}
}
