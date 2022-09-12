#include <stdio.h>

int power(int n, int power);

int main() {
    int n1 = 2, n2 = 3, result;
    result = power(2,4);
    printf("%d",result);

    return 0;
}

int power(int n, int power) {
    int n1 = n;
    for (int i = 1; i < power; i++)
    {
        n = n * n1;
    }
    return n;    
}