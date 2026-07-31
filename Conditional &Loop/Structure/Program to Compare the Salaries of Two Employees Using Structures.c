#include <stdio.h>

struct Employee {

    int id;
    char name[50];
    float salary;

};


int main() {

    struct Employee e1,e2;


    printf("Enter First Employee Details\n");

    printf("ID: ");
    scanf("%d",&e1.id);

    printf("Name: ");
    scanf("%s",e1.name);

    printf("Salary: ");
    scanf("%f",&e1.salary);



    printf("\nEnter Second Employee Details\n");

    printf("ID: ");
    scanf("%d",&e2.id);

    printf("Name: ");
    scanf("%s",e2.name);

    printf("Salary: ");
    scanf("%f",&e2.salary);



    if(e1.salary > e2.salary) {

        printf("\n%s has higher salary",e1.name);

    }

    else if(e2.salary > e1.salary) {

        printf("\n%s has higher salary",e2.name);

    }

    else {

        printf("\nBoth employees have equal salary");

    }


    return 0;
}