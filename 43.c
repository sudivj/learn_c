#include <stdio.h>

int main() {

    int marks;
    int i = 0, sum = 0;
    double average;

    for(i = 0; i <= 10; ++i){
        printf("%d.Enter a value: ", i);
        scanf("%d", &marks);
        if (marks < 0){
            goto jump;
        }
        sum += marks;
     
    }

    jump:
    average = sum / (i - 1);
    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}