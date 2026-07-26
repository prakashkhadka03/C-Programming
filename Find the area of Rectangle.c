#include <stdio.h>
int main()
{
    float len, bth, Area;

    printf("Enter the length and breath of rectangle:");
    scanf("%f%f", &len, &bth);

    Area = len * bth;

    printf("Area of rectangle=%.2f\n", Area);

    return 0;
}