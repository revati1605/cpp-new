#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;  // Extract the last digit
        reversedNum = reversedNum * 10 + digit;  // Append the digit to the result
        num /= 10;  // Remove the last digit
    }
    return reversedNum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int reversed = reverseNumber(num);
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}

