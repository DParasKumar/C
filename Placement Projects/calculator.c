#include <stdio.h>
#include <math.h>

double division(double, double);
int modulus(int, int);
void print_menu();
int main(int argc, char const *argv[])
{
    int choice;
    double first, second, result;
    while (1)
    {
        print_menu();
        scanf("%d", &choice);
        if (choice == 7)
        {
            break;
        }
        if (choice <1 || choice >7)
        {
            /* code */
            fprintf(stderr, "Invalid Menu Choice");
            continue;
        }
        

        printf("\n Please enter the first number:");
        scanf("%lf", &first);
        printf("Now Enter the second number:");
        scanf("%lf", &second);
        switch (choice)
        {
        case 1: // add
            result = first + second;
            break;
        case 2: // sub
            result = first - second;
            break;
        case 3: // multiply
            result = first * second;
            break;
        case 4: // divide
            result = division(first , second);
            break;
        case 5: // modulus
            result = (int)first % (int)second;
            break;
        case 6: // power
            result = pow(first, second);
            break;
        default:
            printf("Invalid choice");
            continue;
        }

        printf("\n Result of operation is : %.2f", result);
    }
    return 0;
}
double division(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for diviision");
        return NAN;
    }
    else
    {
        return a / b;
    }
}
int modulus(int a, int b)
{
if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for modulus");
        return NAN;
    }
    else
    {
        return a % b;
    }
}
void print_menu()
{
    
    printf("\n Welcome to simple calculator\n");
    printf("\n Choose one of the following options:");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");
    printf("\n Now Enter your choice: ");
}
