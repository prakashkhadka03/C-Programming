#include <stdio.h>
int main() {
    float radius,Area;

    printf("Enter the radius of the circle:");
    scanf("%f",&radius);

    Area=3.14*radius*radius;

    printf("Area of the circle=%d\n",Area);

    return 0;

}