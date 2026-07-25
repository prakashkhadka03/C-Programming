#include <stdio.h>
int main() {
    int a,b;
    printf("Enter the two number:");
    scanf("%d%d",&a,&b);

    if(a>b) {
        printf("Largest numberis :%d",a);
    }

    else if(b>a) {
        printf("Largest number is:%d",b);
    }
    else{
        printf("Both number are equla");
    }

    return 0;
}