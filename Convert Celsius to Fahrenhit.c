#include <stdio.h>
int main(){
    float Celsius, fahrenheit;

    printf("Enter the temprature in Celsius:");
    scanf("%f",& Celsius);

    fahrenheit=(Celsius*9/5+32);

    printf("Temprature in fahrenheit =%.2f",fahrenheit);

    return 0;
    
}
