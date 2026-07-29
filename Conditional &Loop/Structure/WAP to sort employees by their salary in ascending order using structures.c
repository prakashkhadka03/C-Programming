#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[5], temp;
    int i, j;

    // Input employee details
    printf("Enter details of 5 employees:\n");

    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Sort employees by salary (Ascending Order)
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(emp[i].salary > emp[j].salary) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    // Display sorted employee details
    printf("\nEmployees Sorted by Salary (Ascending Order)\n");

    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID   : %d\n", emp[i].id);
        printf("Employee Name : %s\n", emp[i].name);
        printf("Salary        : %.2f\n", emp[i].salary);
    }

    return 0;
}