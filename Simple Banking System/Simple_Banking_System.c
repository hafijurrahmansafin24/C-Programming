#include <stdio.h>

int main() {
int choice;
int pin = 29626, enteredPin;   // PIN changed here
int attempts = 0;
float balance = 1000.0, amount;

printf("Welcome to the Simple Banking System\n");

while (attempts < 3) {          // PIN Verification
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin == pin) {
        printf("PIN Verified Successfully!\n");
        break;
    } else {
        printf("Incorrect PIN! Try Again.\n");
        attempts++;
    }
}

if (attempts == 3) {
    printf("Too many wrong attempts. Access Denied!\n");
    return 0;
}

do {                            // Banking Menu Loop
    printf("\n----- Banking Menu -----\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Your Current Balance is: %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount > 0) {
                balance += amount;
                printf("Deposit Successful! New Balance: %.2f\n", balance);
            } else {
                printf("Invalid deposit amount!\n");
            }
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Withdrawal Successful! New Balance: %.2f\n", balance);
            } else {
                printf("Insufficient Balance or Invalid Amount!\n");
            }
            break;

        case 4:
            printf("Thank you for using the Banking System.\n");
            break;

        default:
            printf("Invalid Choice! Please try again.\n");
    }

} while (choice != 4);

return 0;

}
