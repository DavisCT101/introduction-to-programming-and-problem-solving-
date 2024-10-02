#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount;
    int n;

    // Taking user input
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Convert annual rate from percentage to a decimal
    rate/=100;

    // Formula for compound interest
    amount = principal * pow((1 + rate / n), n * time);

    // Print the result
    printf("The compound interest is: %.2lf\n", amount);

    return 0;
}
