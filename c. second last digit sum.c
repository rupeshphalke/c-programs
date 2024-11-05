#include <stdio.h>

int main() {
    int number, lastDigit, secondLastDigit, sum;
    printf("Enter a number: ");
    scanf("%d", &number);

    lastDigit = number % 10;
    secondLastDigit = (number / 10) % 10;
    sum = lastDigit + secondLastDigit;
    printf("The sum of the last two digits is: %d\n", sum);

    return 0;
}