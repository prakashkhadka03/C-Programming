#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i, highest = 0;

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

    // Find the student with the highest marks
    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[highest].marks) {
            highest = i;
        }
    }

    // Display the student with the highest marks
    printf("\nStudent with Highest Marks\n");
    printf("Roll Number : %d\n", s[highest].roll);
    printf("Name        : %s\n", s[highest].name);
    printf("Marks       : %.2f\n", s[highest].marks);

    return 0;
}