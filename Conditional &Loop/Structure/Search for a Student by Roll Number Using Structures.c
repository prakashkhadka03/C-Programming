#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i, search, found = 0;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &search);

    for(i = 0; i < 5; i++) {
        if(s[i].roll == search) {
            found = 1;
            printf("\nStudent Found\n");
            printf("Roll Number: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            break;
        }
    }

    if(found == 0)
        printf("Student Not Found.");

    return 0;
}