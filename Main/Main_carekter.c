#include <stdio.h>>
#include <stdlib.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    gets(name);

    printf("Welcome, ");
    puts(name);
    return 0;
}
