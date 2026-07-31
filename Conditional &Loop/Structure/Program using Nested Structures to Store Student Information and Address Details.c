#include <stdio.h>

struct Address {
    char city[50];
    int houseNo;
};

struct Student {
    int roll;
    char name[50];
    float marks;
    struct Address addr;
};

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("Enter House Number: ");
    scanf("%d", &s.addr.houseNo);

    printf("Enter City: ");
    scanf("%s", s.addr.city);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
    printf("House No: %d\n", s.addr.houseNo);
    printf("City: %s\n", s.addr.city);

    return 0;
}