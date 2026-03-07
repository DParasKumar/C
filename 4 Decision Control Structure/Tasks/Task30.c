<<<<<<< HEAD
// create a program to create a simple calculator that uses a switch statement to perform basic arithmeti operations like addition,subtraction,multiplication,and division.
#include<stdio.h>
int main()
{   
    float first, second;
    char operator;
    printf("Enter Your first number:\n");
    scanf("%f", &first);
    printf("Enter Your second number:\n");
    scanf("%f", &second);

    printf("Enter your operator (+,-,*,/):");
    scanf(" %c", &operator);

    float result;

    switch (operator)
    {
    case '+': result = first + second;
    
        break;
    case '-': result = first - second;
        
        break;
    case '*': result = first * second;
        
        break;
    case '/': result = first / second;
        
        break;
    
    default:
        printf("out of scope");
        break;
    }
    printf("%2f", result);
    return 0;
}
=======
// create a program to create a simple calculator that uses a switch statement to perform basic arithmeti operations like addition,subtraction,multiplication,and division.
#include<stdio.h>
int main()
{   
    float first, second;
    char operator;
    printf("Enter Your first number:\n");
    scanf("%f", &first);
    printf("Enter Your second number:\n");
    scanf("%f", &second);

    printf("Enter your operator (+,-,*,/):");
    scanf(" %c", &operator);

    float result;

    switch (operator)
    {
    case '+': result = first + second;
    
        break;
    case '-': result = first - second;
        
        break;
    case '*': result = first * second;
        
        break;
    case '/': result = first / second;
        
        break;
    
    default:
        printf("out of scope");
        break;
    }
    printf("%2f", result);
    return 0;
}
>>>>>>> 013d0e217c9d130a0e261bcd3d97657869d04c02
