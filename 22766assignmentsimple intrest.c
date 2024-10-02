#include <stdio.h>

int main() {
    float principal, time, rate, simpleInterest;

    // Accepting user input
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter the rate of interest (in percent): ");
    scanf("%f", &rate);

    // Calculate simple interest
    simpleInterest = (principal * time * rate) / 100;

    // Display the result
    printf("The simple interest is: %.2f\n", simpleInterest);

    return 0;
}
