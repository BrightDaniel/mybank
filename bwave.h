#ifndef BWAVE_H
#define BWAVE_H

#include <stdio.h>
#include <string.h>
#include <time.h>

/* defining constant for string input */
#define MAX_LENGTH 60
#define MIN_LENGTH 20

/* function prototypes for our bank */
void createAccount();
int validatePassword(const char* password);
void transferMoney(double* balance, double* lastTransferAmount);
void depositMoney(double* balance);
void checkBalance(double balance);
void printReceipt(const char* transactionType, const char* accountName, const char* accountNumber, const char* bank, double amount, double previousBalance, double currentBalance);


#endif
