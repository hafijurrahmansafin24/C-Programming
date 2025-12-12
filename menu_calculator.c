#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float multi(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    return a / b;
}

int main() {
    int choice;
    float num1, num2;

    printf("MENU DRIVEN CALCULATOR\n");
    printf(" 1. Add\n 2. Sub\n 3. Multi\n 4. Div\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");   // Input numbers
    scanf("%f %f", &num1, &num2);

    switch(choice) {  // Switch for operation
        case 1:
            printf("Result = %.2f\n", add(num1, num2)); // Add
            break;

        case 2:
            printf("Result = %.2f\n", sub(num1, num2)); // Subtract
            break;

        case 3:
            printf("Result = %.2f\n", multi(num1, num2)); // Multiply
            break;

        case 4:
            if(num2 != 0)
                printf("Result = %.2f\n", div(num1, num2)); // Divide
            else
                printf("Error! Division by zero.\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0; // End program
}
