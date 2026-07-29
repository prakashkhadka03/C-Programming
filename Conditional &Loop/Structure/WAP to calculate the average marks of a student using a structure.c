#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks1, marks2, marks3;
    float average;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks in Subject 1: ");
    scanf("%f", &s.marks1);

    printf("Enter Marks in Subject 2: ");
    scanf("%f", &s.marks2);

    printf("Enter Marks in Subject 3: ");
    scanf("%f", &s.marks3);

    // Calculate average
    s.average = (s.marks1 + s.marks2 + s.marks3) / 3;

    // Display student details
    printf("\nStudent Details\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Average     : %.2f\n", s.average);

    return 0;
}