#include <stdio.h>

int main() {

    char ch = 'a';

    printf("All Alphabets from a to z:\n");

    do {
        printf("%c ", ch);
        ch++;
    } while(ch <= 'z');

    return 0;
}
