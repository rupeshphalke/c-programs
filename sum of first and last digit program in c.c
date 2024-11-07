#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    // Get the 5-digit number from the user
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Extract the first and last digits
    firstDigit = num / 10000;
    lastDigit = num % 10;

    // Calculate the sum of the first and last digits
    sum = firstDigit + lastDigit;

    // Print the result
    printf("The sum of the first and last digits is: %d\n", sum);

    return 0;
}