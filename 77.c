#include <stdio.h>
#include "Oper.h"

int main() {
    int n1,n2;
    int sign;
    float result;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter a Number(1.+  2.-  3.*  4./): ");
    scanf("%d", &sign);

    switch (sign){

    case 1:
        result = Add(n1,n2);
        break;

    case 2:
        result = sub(n1,n2);
        break;

    case 3:
        result = multiply(n1,n2);
        break;

    case 4:
        result = divide(n1,n2);
        break;
    
    default:
        printf("Error wrong sign!");
        break;
    }

    printf("Result = %.2f", result);

    return 0;

}