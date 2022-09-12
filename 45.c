#include <stdio.h>

void CalculateSquare(int number) {
    int sum = number * number;
    printf("The square of %d is %d", number, sum);
}

int main() {

    int En;

    printf("Enter a number: ");
    scanf("%d", &En);

    CalculateSquare(En);

    return 0;

}