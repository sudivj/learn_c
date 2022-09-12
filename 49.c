#include <stdio.h>
#include <math.h>

int main() {
    int number;
    
    printf("Enter a psitive number: ");
    scanf("%d", &number);

    float result = sqrt(25);

    printf("Square Root of %d is : %d",number ,result);
    
    return 0;
}