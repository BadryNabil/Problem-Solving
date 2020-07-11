#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>


int main()
{
    // Initialise variables
    int accountNumber, oldCreditLimit, newCreditLimit, balance;
    int count;

    // While count < 3
    for(count=1; count<=3; count++)
    {
        // Input account number
        printf("\nInput account number: ");
        scanf("%d", &accountNumber);

        // Input credit limit before the recession
        printf("Input credit limit before the recession: ");
        scanf("%d", &oldCreditLimit);

        // Input current balance
        printf("Input current balance: ");
        scanf("%d", &balance);

        // Calculate and print new credit limit
        newCreditLimit = oldCreditLimit / 2;
        printf("Customer's new credit limit is $%d\n", newCreditLimit);

        // Print if customer has exceeded their credit limit
        if(balance > newCreditLimit)
        {
            printf("Customer with account %d has exceeded their credit limit!!\n", accountNumber);
        }
    }

    return 0;
}
