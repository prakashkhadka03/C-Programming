#include <stdio.h>

int main() {
    int num1, num2, i, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    // Finding GCD
    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    // Finding LCM
    lcm = (num1 * num2) / gcd;

    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}