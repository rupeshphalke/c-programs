#include <stdio.h>

int main() {
    // Declare variables to store marks
    float subject1, subject2, subject3, subject4, subject5;
    float total, percentage;
    
    // Accept marks for 5 subjects
    printf("Enter marks for subject 1: ");
    scanf("%f", &subject1);
    
    printf("Enter marks for subject 2: ");
    scanf("%f", &subject2);
    
    printf("Enter marks for subject 3: ");
    scanf("%f", &subject3);
    
    printf("Enter marks for subject 4: ");
    scanf("%f", &subject4);
    
    printf("Enter marks for subject 5: ");
    scanf("%f", &subject5);
    
    // Calculate total marks
    total = subject1 + subject2 + subject3 + subject4 + subject5;
    
    // Calculate percentage
    percentage = (total / 500) * 100;
    
    // Print percentage
    printf("Percentage: %.2f%%\n", percentage);
    
    return 0;
}