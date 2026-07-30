#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp;
    float newSalary;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("\nCurrent Salary = %.2f", emp.salary);

    printf("\nEnter New Salary: ");
    scanf("%f", &newSalary);

    emp.salary = newSalary;

    printf("\nUpdated Employee Details\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}