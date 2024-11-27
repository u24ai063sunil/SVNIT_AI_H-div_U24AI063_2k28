#include <stdio.h>
#include <string.h>

struct Employee 
{
    int emp_no;
    char emp_name[50];
    float basic_pay;
};

int main() 
{
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Declare an array of 50 Employee structures
    struct Employee emp[50];

    // Read employee details
    for (i = 0; i < n; i++) 
    {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &emp[i].emp_no);
        printf("Employee Name: ");
        scanf("%s", emp[i].emp_name);
        printf("Basic Pay: ");
        scanf("%f", &emp[i].basic_pay);
    }

    // Print employee details
    printf("\nEmployee Details:\n");
    for (i = 0; i < n; i++) 
    {
        printf("\nEmployee Number: %d\n", emp[i].emp_no);
        printf("Employee Name: %s\n", emp[i].emp_name);
        printf("Basic Pay: %.2f\n", emp[i].basic_pay);
    }

    return 0;
}

