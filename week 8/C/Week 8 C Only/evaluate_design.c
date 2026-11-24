/* WEEK 8 - ACTIVITY 3: EVALUATING STRUCT DESIGN IN C */
#include <stdio.h>

struct BadBankAccount {
    double balance;
};

struct GoodBankAccount {
    double balance;
};

void goodDeposit(struct GoodBankAccount *acc, double amount) {
    if (amount > 0) {
        acc->balance += amount;
    } else {
        printf("Error: Deposit amount must be positive.\n");
    }
}

int main(void) {
    struct BadBankAccount badAccount;
    struct GoodBankAccount goodAccount;

    printf("--- Testing BAD Design ---\n");
    badAccount.balance = 100.0;
    badAccount.balance = -5000.00; /* Direct access bypasses validation. */
    printf("Bad Account Balance: %.2f\n", badAccount.balance);

    printf("\n--- Testing GOOD Design ---\n");
    goodAccount.balance = 100.0;
    goodDeposit(&goodAccount, 500.00);
    printf("Good Account Balance: %.2f\n", goodAccount.balance);
    return 0;
}
