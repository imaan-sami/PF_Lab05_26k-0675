#include <stdio.h>
 
int main() 
{
    int card, pin;
    long balance, amount, remaining, notes2000, notes500, notes100;
    printf("Card status (1=valid, 0=blocked): ");
    scanf("%d", &card);
    printf("PIN correct (1=correct, 0=wrong): ");
    scanf("%d", &pin);
    printf("Account balance: ");
    scanf("%ld", &balance);
    printf("Withdrawal amount: ");
    scanf("%ld", &amount);
 
    if (card == 0)
    {
        printf("Card blocked. Contact bank.\n");
    }
    else if (pin == 0)
    {
        printf("Incorrect PIN.\n");
    }
    else if (amount <= 0)
    {
        printf("Invalid amount.\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient balance.\n");
    }
    else if (amount > 25000)
    {
        printf("Daily limit exceeded.\n");
    }
    else if (balance - amount < 1000)
    {
        printf("Minimum balance must be maintained.\n");
    }
    else
    {
        remaining = amount;
        notes2000 = remaining / 2000;
        remaining = remaining % 2000;
        notes500 = remaining / 500;
        remaining = remaining % 500;
        notes100 = remaining / 100;
 
        printf("New balance: %ld\n", balance - amount);
        printf("2000 notes: %ld\n", notes2000);
        printf("500 notes: %ld\n", notes500);
        printf("100 notes: %ld\n", notes100);
        printf("Please collect your cash.\n");
    }
 
    return 0;
}