#include <stdio.h>
#include "bwave.h"

void depositMoney(double* balance)
{
	double depositAmount;

	printf("Enter deposit amount: ");
	scanf("%lf", &depositAmount);

	if (depositAmount <= 0)
	{
		printf("Invalid deposit amount.\n");
		return;
	}

	*balance += depositAmount;

	printReceipt("Credit Alert", "N/A", "N/A", "N/A", depositAmount, *balance - depositAmount, *balance);

}

