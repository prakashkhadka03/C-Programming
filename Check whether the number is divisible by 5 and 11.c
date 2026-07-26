#include <stdio.h>
int main() {
    int num;

    printf("Enter the number:");
    scanf("%f",&num);

    if(num%5==0&&num%11==0){
        printf("The nmber is divisible by 5 and 11");
    }

    else{
        printf("The number is not divisible by 5 and 11");
    }

    return 0;

}