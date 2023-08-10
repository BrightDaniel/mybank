#include "bwave.h"
/**
 * validatePassword - This functionn validates the password of user.
 * Return: 1 if successful
 */

int validatePassword(const char* password) {
	char val[MIN_LENGTH];
	int value;
	int i = 3;


	printf("Re-enter your password: ");
	scanf("%s", val);

	value = strcmp(password, val);

	if (value != 0) {
		while (i >= 0) {
			printf("\n Your passwords don't match \n");
			printf("Try again, Re-enter your password: ");
			scanf("%s", val);

			value = strcmp(password, val);
			if (value == 0) {
				return 1; // Password validation successful
			}

			if (i > 0)
				printf("Passwords don't match. You have %d more attempts \n", i);
			else
				printf("Your account is locked");

			i--;
		}
	} else {
		return 1; // Password validation successful
	}

	return 0; // Password validation failed
}
