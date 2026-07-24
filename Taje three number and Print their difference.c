#include <stdio.h>

int main() {
    int num1, num2, num3, difference;

    printf("Enter the first number:");
    scanf("%d",&num1);

    printf("Enter the Second number:");
    scanf("%d",&num2);

    printf("Enter the third number:");
    scanf("%d",&num3);


    difference=num1-num2-num3;

    printf("difference=%d\n",difference);

    return 0;
}