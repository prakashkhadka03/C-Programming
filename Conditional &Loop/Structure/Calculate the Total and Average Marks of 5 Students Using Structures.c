#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i;
    float total = 0, average;

    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        total += s[i].marks;
    }

    average = total / 5;

    printf("\nTotal Marks = %.2f", total);
    printf("\nAverage Marks = %.2f", average);

    return 0;
}