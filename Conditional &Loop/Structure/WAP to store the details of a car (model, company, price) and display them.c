#include <stdio.h>

struct Car {
    char model[50];
    char company[50];
    float price;
};

int main() {
    struct Car c;

    // Input car details
    printf("Enter Car Model: ");
    scanf("%s", c.model);

    printf("Enter Company Name: ");
    scanf("%s", c.company);

    printf("Enter Car Price: ");
    scanf("%f", &c.price);

    // Display car details
    printf("\nCar Details\n");
    printf("Model   : %s\n", c.model);
    printf("Company : %s\n", c.company);
    printf("Price   : %.2f\n", c.price);

    return 0;
}