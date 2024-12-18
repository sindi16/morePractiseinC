#include <stdio.h>

int main() {
    int balance = 20000;  // Initialize balance (can be any value)
    int amount;

    // Ask for the withdrawal amount
    printf("Please enter your withdrawal amount: \n");
    scanf("%d", &amount);

    // Check if the amount is a valid multiple of 10
    if (amount % 10 == 0) 
    {
        // Check if the amount is less than or equal to the balance
        if (amount <= balance) 
        {
            balance -= amount;  // Subtract the amount from balance
            printf("Successful transaction\n");
            printf("The new balance is %d\n", balance);
        } else 
        {
            printf("Insufficient funds\n");
        }
    } 
    else
    {
        // Error message for invalid withdrawal amount
        printf("Invalid amount. Please enter a multiple of 10.\n");
    }

    return (0);
}
