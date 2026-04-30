// Write a C program that defines a structure Employee with members: name, employee ID, and salary.
// Take input for 5 employees and display the details of the employee with the highest salary.
#include <stdio.h>

// Define the structure named 'Employee'
struct Employee
{
    char name[50];
    int emp_id;
    float salary;
};

int main()
{
    // Declare an array of 5 Employee structures
    struct Employee e[5];
    int i, max_index = 0;

    // 1. Take input for 5 employees
    for (i = 0; i < 5; i++)
    {
        printf("--- Enter details for Employee %d ---\n", i + 1);

        printf("Name: ");
        // Clear buffer before fgets
        getchar();
        fgets(e[i].name, sizeof(e[i].name), stdin);

        printf("Employee ID: ");
        scanf("%d", &e[i].emp_id);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
        printf("\n");
    }

    // 2. Find the index of the employee with the highest salary
    for (i = 1; i < 5; i++)
    {
        if (e[i].salary > e[max_index].salary)
        {
            max_index = i;
        }
    }

    // 3. Display the details of the employee with the highest salary
    printf("--- Employee with the Highest Salary ---\n");
    printf("Name: %s", e[max_index].name);
    printf("Employee ID: %d\n", e[max_index].emp_id);
    printf("Salary: %.2f\n", e[max_index].salary);

    return 0;
}