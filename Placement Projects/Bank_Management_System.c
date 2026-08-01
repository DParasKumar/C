#include <stdio.h>

void create_account();
void deposit_money();
void withdraw_money();
void check_balance();

int main(int argc, char const *argv[])
{
    while (1)
    {

        int choice;

        printf("\n\n***Bank Management System***");
        printf("\n 1.Create Account");
        printf("\n 2.Deposit Money");
        printf("\n 3.Withdraw Money");
        printf("\n 4.Check Balance");
        printf("\n 5.Exit");
        printf("\n Enter your choice:");
        scanf("%d", &choice);
        /* code */

        switch (choice)
        {
        case 1:
            create_account();
            /* code */
            break;

        case 2:
            deposit_money();
            /* code */
            break;

        case 3:
            withdraw_money();
            /* code */
            break;

        case 4:
            check_balance();
            /* code */
            break;

        case 5:
            printf("\n Closing the bank, Thanks for your visit");
            return 0;
            break;

        default:
            printf("Invalid Choice");
            break;
        }
    }
}
void create_account()
{
    printf("\nCreating Account");
}
void deposit_money()
{
    printf("\nDepositing Money");
}
void withdraw_money()
{
    printf("\nWithdrawing Money");
}
void check_balance()
{
    printf("\nCecking Balance");
}