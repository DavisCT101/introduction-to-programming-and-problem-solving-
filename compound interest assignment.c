/* Ref No: CT101/G/22766/24
   Name: Mucheke Davis Mwangi
   Date: 1/10/2024
   To calculate compound interest */
#include <stdio.h>
#include <math.h> // For pow()

int main() {
    float principal, rate, time, amount, compound_interest;
    int n;

    // Taking user input
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Formula for compound interest
    amount = principal * pow((1 + rate / (n * 100)), n * time);
    compound_interest = amount - principal;

    // Print the result
    printf("The amount is: %.2f\n", amount);
    printf("The compound interest is: %.2f\n", compound_interest);

    return 0;
}
