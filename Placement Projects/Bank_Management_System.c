#include <stdio.h>
#include <string.h>

void create_account();
void deposit_money();
void withdraw_money();
void check_balance();
const char *ACCOUTN_FILE = "account.dat";

typedef struct
{
    char name[50];
    int acc_no;
    float balance;
    /* data */
} Account;

int main(int argc, char const *argv[])
{
    while (1)
    {

        int choice;

        printf("\n***Bank Management System***");
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
    Account acc;
    FILE *file = fopen(ACCOUTN_FILE, "ab+");
    if (file == NULL)
    {
        printf("\nUnable to open file !!");
        return;
    }

    char c;
    do
    {
        /* code */
        c = getchar();
    } while (c != '\n' && c != EOF);

    printf("\n Enter your name: ");
    fgets(acc.name, sizeof(acc.name), stdin);

    strcspn(acc.name, "\n");
    int ind = strcspn(acc.name, "\n");
    acc.name[ind] = '\0';
    printf("\nEnter your account number:");
    scanf("%d", &acc.acc_no);
    acc.balance = 0;

    fwrite(&acc, sizeof(acc), 1, file);
    fclose(file);
    printf("\nAccount created successfully");
}
void deposit_money()
{
    FILE *file = fopen(ACCOUTN_FILE, "rb+");
    if (file == NULL)
    {
        printf("\nUnable to open file !!");
        return;
    }
    int acc_no;
    float money;
    Account acc_r;
    printf("\nEnter your account number:");
    scanf("%d", &acc_no);
    printf("Enter amount to deposit:");
    scanf("%f",&money);

    while (fread(&acc_r , sizeof(acc_r), 1, file))
    {
        if (acc_r.acc_no == acc_no)
        {
            acc_r.balance +=money;
            fseek(file, -sizeof(acc_r), SEEK_CUR);
            fwrite(&acc_r, sizeof(acc_r), 1, file);
            fclose(file);
            printf("Successfuly deposisted Rs %.2f. New balance is Rs %.2f", money, acc_r.balance);
            return;
        }
        
        /* code */
    }
    fclose(file);
    printf("Account no %d not found in records.", acc_no);
    

}
void withdraw_money()
{
    FILE *file = fopen(ACCOUTN_FILE, "rb+");
    if (file == NULL)
    {
        printf("\nUnable to open file !!");
        return;
    }

    int acc_no;
    float money;
    Account acc_r;
    printf("\nEnter your account number:");
    scanf("%d", &acc_no);
    printf("Enter amount to withdraw:");
    scanf("%f",&money);

    while (fread(&acc_r , sizeof(acc_r), 1, file))
    {
        if (acc_r.acc_no >= acc_no)
        {
            if (acc_r.balance >= money)
            {
                acc_r.balance -= money;
                fseek(file, -sizeof(acc_r), SEEK_CUR);
                fwrite(&acc_r, sizeof(acc_r),1, file);
                printf("Succesffully withdrawn Rs. %.2f Remaining balance is Rs. %.2f", money, acc_r, acc_r.balance);
            }else{
                printf("Insufficient balance!");
            }
            
        }
        
        /* code */
    }
    fclose(file);
    printf("Account no %d not found in records.", acc_no);
}
void check_balance()
{
    FILE *file = fopen(ACCOUTN_FILE, "rb");
    if (file == NULL)
    {
        printf("\nUnable to open file !!");
        return;
    }
    int acc_no;
    Account acc_read;
    printf("\nEnter your account number:");
    scanf("%d", &acc_no);

    while (fread(&acc_read, sizeof(acc_read), 1, file))
    {
        if (acc_read.acc_no == acc_no)
        {
            printf("Your current balance is Rs.%.2f", acc_read.balance);
            fclose(file);
            return;
        }
    }
    fclose(file);
    printf("\nAccount No: %d was not found\n", acc_no);
}