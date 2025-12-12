#include <stdio.h>

int main()
{
    char grade = 'A';

    switch (grade) {
        case 'A' :
        printf("Excellent!\n");
        break;

        case 'B' :
        case 'C' :
        printf("Well Done\n");
        break;

        case 'D' :
        printf("You Passed\n");
        break;

        case 'F' :
        printf("Better Try Again\n");
        break;

        default :
        printf("Invalid Grade\n");
    }

    return 0;
}
