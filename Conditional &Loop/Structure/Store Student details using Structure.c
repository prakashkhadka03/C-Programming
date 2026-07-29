#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    printf("Enter student roll number: ");
    scanf("%d", &s.roll);

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter student marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}