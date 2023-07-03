#include<stdio.h>
#include<conio.h>
/* you manage a travel agency and you want your driver to input their following details:
NAME
DRIVING LICENSE NO.
ROUTE
KMS
your program should be able to take (N) as input and your drivers will start iputting their details one by one.

your program should print details of the drivers in a beautiful fashion.
user structures.
*/
struct driver
{
    char name[45];
    char dlNo[43];
    char route[57];
    int kms;
};

int main()
{
    struct driver d1,d2,d3;
 printf("Enter the details of the drivers number 1:\n");

    printf("Enter the name of first driver:\n");
    scanf("%s", &d1.name);

    printf("Enter the dlNo of first driver:\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of first driver:\n");
    scanf("%s", &d1.route);

    printf("Enter the kms of first driver:\n");
    scanf("%d", &d1.kms);


 printf("Enter the details of the drivers number 2:\n");

    printf("Enter the name of second driver:\n");
    scanf("%s", &d2.name);

    printf("Enter the dlNo of second driver:\n");
    scanf("%s", &d2.dlNo);

    printf("Enter the route of second driver:\n");
    scanf("%s", &d2.route);

    printf("Enter the kms of second driver:\n");
    scanf("%d", &d2.kms);    

 printf("Enter the details of the drivers number 3:\n");

    printf("Enter the name of third driver:\n");
    scanf("%s", &d3.name);

    printf("Enter the dlNo of third driver:\n");
    scanf("%s", &d3.dlNo);

    printf("Enter the route of third driver:\n");
    scanf("%s", &d3.route);

    printf("Enter the kms of third driver:\n");
    scanf("%d", &d3.kms);   

    printf("\n*************************PRINTING INFORMATION OF THESE DRIVERS:********************************************\n");
    printf("1.for driver no 1:\n Name is %s\n", d1.name);  
    printf("2.for driver no 1:\n DL Number is %s\n", d1.dlNo);  
    printf("3.for driver no 1:\n route is %s\n", d1.route);
    printf("for driver no 1:\n kms is %d\n", d1.kms);    

    printf("--------------------------------------------------------------------------------------------------------------\n");
    
    printf("1.for driver no 2:\n Name is %s\n", d2.name);  
    printf("2.for driver no 2:\n DL Number is %s\n", d2.dlNo);  
    printf("3.for driver no 2:\n route is %s\n", d2.route);
    printf("4.for driver no 2:\n kms is %d\n", d2.kms); 

    printf("--------------------------------------------------------------------------------------------------------------\n");

    printf("1.for driver no 3:\n Name is %s\n", d3.name);  
    printf("2.for driver no 3:\n DL Number is %s\n", d3.dlNo);  
    printf("3.for driver no 3:\n route is %s\n", d3.route);
    printf("4.for driver no 3:\n kms is %d\n", d3.kms); 
    
    printf("--------------------------------------------------------------------------------------------------------------\n");

    return 0;
}