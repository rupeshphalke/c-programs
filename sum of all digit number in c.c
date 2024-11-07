#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        sum += number % 10;  // Add the last digit to the sum
        number /= 10;        // Remove the last digit from the number
    }

    printf("Sum of all digits: %d\n", sum);

    return 0; 
}