#include <stdio.h>

int main() {
	int pin = 1234;            // Correct PIN
	int userPin;
	int balance = 20000;       // ATM balance
	int choice;
	int amount;                // Withdrawal amount
	int attempts = 0;
	char again;

	printf("Welcome to ATM Simulator\n");

	while (attempts < 3) {      // PIN Verification
		printf("Enter your PIN: ");
		scanf("%d", &userPin);

		if (userPin == pin) {
			printf("\nPIN Verified Successfully!\n\n");
			break;
		} else {
			attempts++;
			printf("Incorrect PIN! Attempts left: %d\n", 3 - attempts);
		}
	}

	if (attempts == 3) {        // 3 wrong attempts, block access
		printf("\nYour card has been blocked! Try again later.\n");
		return 0;
	}

	do {
		printf("ATM Menu\n");           // Main ATM Menu
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch(choice) {

		case 1:
			printf("\nYour current balance is: %d Tk\n\n", balance);
			break;

		case 2:
			printf("\nEnter withdrawal amount: ");
			scanf("%d", &amount);

			if (amount <= 0) {
				printf("Invalid amount!\n\n");
			}
			else if (amount > balance) {
				printf("Insufficient Balance!\n\n");
			}
			else {
				balance -= amount;
				printf("Please collect your cash: %d Tk\n", amount);
				printf("Remaining balance: %d Tk\n\n", balance);
			}
			break;

		case 3:
			printf("\nThank you for using the ATM Simulator.\n");
			return 0;

		default:
			printf("\nInvalid Choice! Please select a valid option.\n\n");
		}

		printf("Do you want another transaction? (Yes/No): ");
		scanf(" %c", &again);

	} while (again == 'Y' || again == 'y');

	printf("\nThank you for using the ATM Simulator.\n");

	return 0;
}
