#include <stdio.h>

int main() {
    int arr[] = {1,2,3,2,1};
    int n = 5, isPalindrome = 1;

    for(int i = 0; i < n/2; i++) {
        if(arr[i] != arr[n - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
