
#include <stdio.h>

int main()
{
    int marks, income;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 90 && marks <= 100) {
        printf("Grade: A");
        printf("\nEnter your family income: ");
        scanf("%d", &income);
        if(income < 50000) {
            printf("\nEligible");
        }else{
          printf("\nNot Eligible");
        }
    }

    else if(marks >= 80 && marks <= 89) {
        printf("Grade: B");
        printf("\nEnter your family income: ");
        scanf("%d", &income);
        if(income < 50000) {
            printf("\nEligible");
        }else{
          printf("\nNot Eligible");
        }
    }

    else if(marks >= 70 && marks <= 79){
        printf("Grade: C");
        printf("\nNot Eligible");
    }

    else if(marks >= 60 && marks <= 69){
        printf("Grade: D");
        printf("\nNot Eligible");
    }

    else if(marks >= 0 && marks <= 59){
        printf("Grade: F");
        printf("\nNot Eligible");
    }

    else{
        printf("Wrong Input");
    }

    return 0;
}
