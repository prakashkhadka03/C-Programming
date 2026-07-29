#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i, searchRoll, found = 0;

    // Input details of 5 students
    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Input roll number to search
    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &searchRoll);

    // Search for the student
    for(i = 0; i < 5; i++) {
        if(s[i].roll == searchRoll) {
            found = 1;

            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", s[i].roll);
            printf("Name        : %s\n", s[i].name);
            printf("Marks       : %.2f\n", s[i].marks);

            break;
        }
    }

    // If student is not found
    if(found == 0) {
        printf("\nStudent with Roll Number %d not found.\n", searchRoll);
    }

    return 0;
}