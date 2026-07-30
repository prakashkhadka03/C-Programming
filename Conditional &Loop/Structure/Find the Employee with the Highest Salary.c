#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[5];
    int i, highest = 0;

    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    for(i = 1; i < 5; i++) {
        if(emp[i].salary > emp[highest].salary)
            highest = i;
    }

    printf("\nEmployee with Highest Salary\n");
    printf("ID: %d\n", emp[highest].id);
    printf("Name: %s\n", emp[highest].name);
    printf("Salary: %.2f\n", emp[highest].salary);

    return 0;
}