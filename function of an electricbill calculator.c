/*Name: Mucheke Davis Mwangi
Reg No:CT101/G/22766/24
electric bill function */
#include <stdio.h>
float calculateTotalBill(float units);

int main() {
    int customerId;
    char customerName[50];
    float units, totalBill;

    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName); // Allow spaces in the name
    printf("Enter Units Consumed: ");
    scanf("%f", &units);
    
    // Calculate total bill using the function
    totalBill = calculateTotalBill(units);
    
    // Display the output
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", units);
    printf("Total Amount to Pay: Kshs %.2f\n", totalBill);

    return 0;
}

// Function to calculate the electricity bill
float calculateTotalBill(float units) {
    float chargePerUnit;
    float totalAmount;

    // Determine charge per unit based on units consumed
    if (units < 200) {
        chargePerUnit = 1.20;
    } else if (units < 400) {
        chargePerUnit = 1.50;
    } else if (units < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    // Calculate total amount
    totalAmount = units * chargePerUnit;

    // Apply surcharge if total amount exceeds Kshs 400
    if (totalAmount > 400) {
        totalAmount *= 1.15; 
    }

    // Ensure the minimum bill is Kshs 100
    if (totalAmount < 100) {
        totalAmount = 100;
    }

    return totalAmount;
}
