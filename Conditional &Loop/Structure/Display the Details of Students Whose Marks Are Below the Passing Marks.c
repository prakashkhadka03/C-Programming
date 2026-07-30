#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudents Below Passing Marks (40)\n");

    for(i = 0; i < 5; i++) {
        if(s[i].marks < 40) {
            printf("\nRoll Number: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
        }
    }

    return 0;
}